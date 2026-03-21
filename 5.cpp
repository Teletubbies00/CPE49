#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    while (cin >> a) {
        int b = a;
        while (b >= 3) {
            a += b / 3;
            b = b % 3 + b / 3;
        }
        if (b == 2)
            a++;
        cout << a << endl;
    }
}