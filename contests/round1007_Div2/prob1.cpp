#include <bits/stdc++.h>
using namespace std;

#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

void solve() {
    ll k;
    cin >> k;

    if (k % 6 == 1 || k % 6 == 4) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    Mazen
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
