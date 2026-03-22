#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b) {
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;

    int cnt[26] = {0};
    string s;

    while (n--) {
        getline(cin, s);
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                char c = toupper(s[i]);
                cnt[c - 'A']++;
            }
        }
    }

    vector<pair<char, int>> v;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            v.push_back({char('A' + i), cnt[i]});
        }
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
// 瘋狂程式不過
/*test 2
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}
int main()
{
    int n, cnt[26] = {0};
    cin >> n;
    string input;
    cin.ignore();

    while (n--)
    {
        getline(cin, input);
        for (char c : input)
        {
            if (isalpha(c))
            {
                c = toupper(c);
                cnt[c - 'A']++;
            }
        }
    }
    vector<pair<char, int>> v;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            v.push_back({char('A' + i), cnt[i]});
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

test 3


*/
