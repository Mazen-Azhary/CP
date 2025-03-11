#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

//Efficient Approach: The GCD of N and N / 2 is N / 2 which is the maximum of all GCDs possible for any pair from 1 to N.

void solve() {
int n;
cin >> n;
cout << n / 2 << endl;
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