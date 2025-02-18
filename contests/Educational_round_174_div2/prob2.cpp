#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define ll long long

void solve() {
  ll n, m;
  cin >> n >> m;
  map<ll, vector<pair<ll, ll>>> mp;
  set<ll> uniques;         // color , cells having it
  vector<pair<ll, ll>> freq(n * m, {0, 0}); // color,freq
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      ll x;
      cin >> x;
      uniques.insert(x);
      ll jump = i * m + j;
      freq[jump].first = x;
      freq[jump].second++;
      mp[x].push_back({i, j});
    }
  }

  ll numOfColors = uniques.size();
  sort(freq.begin(), freq.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
    return a.second > b.second; 
});




}

int main() {
  Mazen ll t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}