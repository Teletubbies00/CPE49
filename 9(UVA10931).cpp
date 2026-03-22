#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    while (cin >> a) {
        if (a == 0) return 0;
        int count = 0;
        string res;
        cout << "The parity of ";
        while (a > 0) {
            res += (a % 2 + '0');
            a /= 2;
        }
        for (int i = 0; i < res.size(); i++) {
            if (res[i] == '1') count++;
        }
        reverse(res.begin(), res.end());
        cout << res << " is " << count << " (mod 2)." << endl;
    }
    return 0;
}