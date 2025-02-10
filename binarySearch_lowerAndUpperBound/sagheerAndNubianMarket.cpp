#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

bool doable(ll mid, vector<ll> &a, ll s, ll &totalCost) {
    vector<ll> costs;
    for (ll i = 1; i < a.size(); ++i) {
        costs.push_back(a[i] + i*mid);
    }
    sort(costs.begin(), costs.end());
    
    totalCost = 0;
    for (ll i = 0; i < mid; ++i) {
        totalCost += costs[i];
        if (totalCost > s) {
            return false;
        }
    }
    return true;
}

int main() {
    Mazen
    
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    
    ll l = 0, r = n;
    ll ans = 0, minCost = 0;
    
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll totalCost;
        if (doable(mid, a, s, totalCost)) {
            ans = mid;
            minCost = totalCost;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    cout << ans << " " << minCost << endl;
    
    return 0;
}