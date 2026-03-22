#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int func(int a) {
    int count = 1;
    while (a != 1) {
        if (a % 2 == 0) a /= 2;
        else a = a * 3 + 1;
        count++;
    }
    return count;
}

int main() {
    vector<int> sheet(MAX + 1);
    for (int i = 1; i <= MAX; i++) {
        sheet[i] = func(i);
    }

    int a, b;
    while (cin >> a >> b) {
        cout << a << " " << b << " ";
        if (a > b) swap(a, b);
        pair<int, int> res = {0, INT_MIN};
        for (int i = a; i <= b; i++) {
            if (sheet[i] > res.second) {
                res.first = i;
                res.second = sheet[i];
            }
        }
        cout << res.second << endl;
    }
    return 0;
}