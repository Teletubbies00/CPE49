#include <bits/stdc++.h>
using namespace std;

int main() {
    string key = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    while (getline(cin, s)) {
        for (char c : s) {
            c = tolower(c);
            if (c != ' ') {
                cout << key[key.find(c) - 2];
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}