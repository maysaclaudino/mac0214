#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> acs(n+1);
    acs[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> acs[i+1];
        acs[i+1] += acs[i+1-1];
    }
    string s; cin >> s;

    int score = 0;

    int l = 0, r = n-1;
    while (r > l) {
        if (s[l] != 'L') {
            l++;
        }
        if (s[r] != 'R') {
            r--;
        }

        if (s[l] == 'L' and s[r] == 'R') {
            score += acs[r+1] - acs[l]; 
            l++; r--;
        }
    }

    cout << score << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}