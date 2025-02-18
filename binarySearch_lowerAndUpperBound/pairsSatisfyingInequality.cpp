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
  vector<ll> a(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  ll pairs = 0;
  for (int i = 1; i < n + 1; i++) {
    if (a[i] >= i)
      continue;
    for (ll j = i + 1; j <= n; j++) {
      if (a[j] < j && i < a[j]) {
        pairs++;
      }
    }
  }

  cout << pairs << endl;
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
