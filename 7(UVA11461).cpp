#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            return 0;
        }
        int count = 0;
        for (int i = 1; i * i <= b; i++) {
            if (i * i >= a) count++;
        }
        cout << count << endl;
    }
    return 0;
}