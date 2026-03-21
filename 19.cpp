#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int count = 0;

    while (cin >> n) {
        count++;
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        bool ok = true;

        if (n > 0 && nums[0] < 1)
            ok = false;

        for (int i = 1; i < n; i++) {
            if (nums[i] < 1 || nums[i] <= nums[i - 1]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            set<int> sums;

            for (int i = 0; i < n && ok; i++) {
                for (int j = i; j < n; j++) {
                    int s = nums[i] + nums[j];

                    if (sums.count(s)) {
                        ok = false;
                        break;
                    }

                    sums.insert(s);
                }
            }
        }
        if (ok)
            cout << "Case #" << count << ": It is a B2-Sequence.\n\n";
        else
            cout << "Case #" << count << ": It is not a B2-Sequence.\n\n";
    }

    return 0;
}