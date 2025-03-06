#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define ll long long

void solve() {
  ll n, x, k;
  string s;
  cin >> n >> x >> k;
  cin >> s;
  int origin = x;
  ll zeros = 0;
  int i=0;
  set<int> executed;
  while(executed.size()<n || x!=0){
    char currentCommand = s[i % n];
    if (currentCommand == 'L') {
      x--;
    } else {
      x++;
    }
    executed.insert(i%n);

    
    if (x == 0) {
      zeros++;
      x = origin;
      i=0;
    }else{
      i++;
    }
  }
  cout << zeros << endl;
}

int main() {
  Mazen ll t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}