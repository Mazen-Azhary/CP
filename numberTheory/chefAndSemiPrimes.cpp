#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
vector<bool> sieve(201, 1);
vector<int> spf(201, 0);

void solve() {

  int n;
  cin >> n;
  int num = n;
  int n1=spf[n];
  num /= n1;
  int n2 = spf[num];
  num /= spf[num];

  if (num == 1 && n1!=n2) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}

int main() {
  Mazen int t;
  cin >> t;
  sieve[0] = sieve[1] = false;
  spf[0] = spf[1] = 1;

  for (int i = 2; i <= 200; i++) {
    if (sieve[i]) {
      spf[i] = i;
      for (int j = i * i; j <= 200; j += i) {
        sieve[j] = false;
        if (spf[j] == 0)
          spf[j] = i;
      }
    }
  }

  while (t--) {
    solve();
  }

  return 0;
}