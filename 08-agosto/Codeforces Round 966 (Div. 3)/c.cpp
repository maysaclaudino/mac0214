#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n; cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        bool check = true;
        map<char, int> mp;
        map<int, char> mp1;
        string s; cin >> s;

        if (s.size() != n) {
            check = false;
        }
        else {
            for (int j = 0; j < n; j++) {
                char ch = s[j];
                if (mp.find(ch) != mp.end() and (mp[ch] != vec[j])) {
                    check = false;
                }
                if (mp1.find(vec[j]) != mp1.end() and (mp1[vec[j]] != ch)) {
                    check = false;
                }
                mp[ch] = vec[j];
                mp1[vec[j]] = ch;
            }
        mp.clear();
        mp1.clear();
        }
        if (check) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}