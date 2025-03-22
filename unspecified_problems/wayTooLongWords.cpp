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
  string s;
  cin >> s;
  int len = s.size();
  if (len > 10) {
    cout << s[0] << len - 2 << s[len - 1] << endl;
  } else {
    cout << s << endl;
  }
}

int main() {
  Mazen int n;
  cin >> n;
  while (n--) {
    solve();
  }

  return 0;
}