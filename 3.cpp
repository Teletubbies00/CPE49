#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    while (a--) {
        cin >> b >> c;
        if (b - c < 0 || (b - c) % 2 == 1) {
            cout << "impossible" << endl;
        } else {
            cout << (b + c) / 2 << " " << (b - c) / 2 << endl;
        }
    }
}