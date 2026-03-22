#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    while (cin >> M >> N) {
        cout << M << " " << N << endl;
        if (M == 0 && N == 0) return 0;
        vector<vector<int>> nums(2 * N - 1);
        while (M--) {
            int a;
            cin >> a;
            nums[a % N + (N - 1)].push_back(a);
        }

        for (int i = 0; i < 2 * N - 1; i++) {
            vector<int> v_odd, v_even;
            for (int j = 0; j < nums[i].size(); j++) {
                if (nums[i][j] % 2 == 0) v_even.push_back(nums[i][j]);
                else v_odd.push_back(nums[i][j]);
            }
            sort(v_odd.begin(), v_odd.end());
            sort(v_even.begin(), v_even.end());
            reverse(v_odd.begin(), v_odd.end());

            for (int temp : v_odd) cout << temp << endl;
            for (int temp : v_even) cout << temp << endl;
        }
    }
    return 0;
}