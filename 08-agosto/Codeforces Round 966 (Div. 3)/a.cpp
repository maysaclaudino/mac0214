#include <bits/stdc++.h>
using namespace std;

bool checa(int d, int a) {
    return (a/d == d and a%d >= 2);
}

void solve() {
    int a; cin >> a;

    bool imp = false;

    if (a > 100) {
        if (a < 1000) {
            imp = (a/10 == 10 and a%10 >= 2);
        }
        else if (a < 10000) {
            imp = (a/100 == 10 and a%100 >= 10);
        }
        else if (a < 100000) imp = (a/1000 == 10 and a%1000 >= 100);
    }

    if (imp) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}