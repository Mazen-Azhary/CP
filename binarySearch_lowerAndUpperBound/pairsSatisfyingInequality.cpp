#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define ll long long

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n, 0);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll ans = 0;
  vector<ll> rights;
  for (int i = 0; i < n; i++) {
    if (a[i] < i + 1) {
      ans += lower_bound(rights.begin(), rights.end(), a[i]) - rights.begin();
      rights.push_back(i + 1);
    }
  }
  cout << ans << endl;
}

int main() {
  Mazen

      ll t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
