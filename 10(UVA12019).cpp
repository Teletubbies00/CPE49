#include <bits/stdc++.h>
using namespace std;

int main() {
    int doomsday[12] = {10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};
    string week[7] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"};

    int T;
    cin >> T;

    while (T--) {
        int M, D;
        cin >> M >> D;

        int diff = D - doomsday[M - 1];
        int day = (1 + diff % 7 + 7) % 7;

        cout << week[day] << endl;
    }

    return 0;
}