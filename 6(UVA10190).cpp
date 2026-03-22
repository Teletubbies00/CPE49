#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a < 2 || b < 2) {
            cout << "Boring!" << endl;
            continue;
        }
        int temp = b;
        while (temp < a) {
            temp *= b;
        }
        if (temp == a) {
            while (temp) {
                cout << temp;
                if (temp == 1) break;
                cout << " ";
                temp /= b;
            }
            cout << endl;
        } else {
            cout << "Boring!" << endl;
        }
    }
    return 0;
}
// 為了節省記憶體所以使用int temp，一般寫法可以用vector<int>