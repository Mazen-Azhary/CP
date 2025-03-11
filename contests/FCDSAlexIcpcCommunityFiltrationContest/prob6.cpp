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
  int n, k;
  cin >> n >> k;
  unordered_set<int> s; 
    vector<int> idx;    
  for(int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    if (s.find(x) == s.end()) { //if x didn't esxisr before
      s.insert(x);
      idx.push_back(i);
  }
  }
  

  if(s.size() < k) {
    cout << "NO" << endl;
    return;
  }
  else{
    cout << "YES" << endl;
    for(int i = 0; i < k; i++) {
      cout << idx[i] << " "; 
    }
  }


}

int main() {
  Mazen int t;
  t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}