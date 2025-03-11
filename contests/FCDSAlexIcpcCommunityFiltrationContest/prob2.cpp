#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

int main() {
  Mazen int t;

  cin >> t;
  // brute force

  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
      cin >> v[i];
    }
    int ans=-1;
    for (int i = 0; i < n; i++) {   
      
      bool winnable = true;
      int val = v[i];
      for (int j = 0; j < n; j++) {
        if(i == j) continue;
        if (abs(val - v[j]) % k == 0) {
          winnable = false;
          break;
        }
      }
      if (winnable) {
        ans = i;
        break;
      }
    }
    if (ans != -1) {
      cout << "YES" << endl;
      cout << ans + 1 << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}