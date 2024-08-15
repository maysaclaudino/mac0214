#include <bits/stdc++.h>
using namespace std;

void solve() {
    // cout << "oii\n";
    int n;
    cin >> n;
    // printf("n: %d\n", n);

    vector<bool> vec(n+2, false);

    int a;
    cin >> a;
    vec[a] = true;

    bool fol = true;

    for (int i = 2; i <= n; i++) {
        cin >> a;
        if (vec[a-1] == false and vec[a+1] == false) {
            fol = false;
        }
        vec[a] = true;
    }

    if (fol) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    vec.clear();
}

signed main() {
    // ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        // cout << "t " << t << "\n";
        solve();
    }
}