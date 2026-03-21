#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, count = 0;
    cin >> a;
    while (a--) {
        cin >> b >> c;
        count++;
        long long total = 0;
        for (long long i = b; i <= c; i++) {
            if (i % 2 == 1)
                total += i;
        }
        cout << "Case " << count << ": " << total << endl;
    }
}