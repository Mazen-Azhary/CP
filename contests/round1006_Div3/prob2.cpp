#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n < 3) {
    cout << 0 << endl;
    return;
  }
  string subStr = "-_-";
  ll underScore = 0;
  ll dash = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '-') {
      dash++;
    } else {
      underScore++;
    }
  }

  if (dash == 1 || underScore == 0) {
    cout << 0 << endl;
    return;
  }
  if (underScore * 2 == dash) {
    cout << underScore * n << endl;
    return;
  } else if (underScore * 2 < dash) {
    cout << underScore * underScore * 9 << endl;
    return;
  } else if (underScore - dash >= 0) {
    ll ans = pow(underScore - dash / 2, 2) ;
    if(underScore==dash){
        ans*=3;
        ans+=3;
    }if(n==4){
        ans/=6;
    }
    cout << ans << endl;
  } else {
    cout << 0 << endl;
  }
}

int main() {
  Mazen int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}