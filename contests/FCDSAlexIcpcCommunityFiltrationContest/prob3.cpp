#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

void solve() {
  int n;
  int k;
  cin >> n >> k;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }

  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      bool flag = true;
      int ans;
      if (abs(v[i] - v[j]) % k == 0) {
        flag = false;
      } else {
        ans = i;
      }
      
    }
    cout << "NO" << endl;
  }
}

int main() {
  Mazen int t;
  t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}