#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl "\n"
bool isPrime(ll n, ll &spf) {
  spf = n;
  if (n == 1) {
    spf = 1;
    // for this problem only
    return true;
  }
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      spf = i;
      return false;
    }
  }
  return true;
}

vector<ll> getDivisors(ll n) {
  vector<ll> divisors;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      divisors.push_back(i);
      if (i != n / i) {
        divisors.push_back(n / i);
      }
    }
  }
  return divisors;
}

void solve() {
  ll x, y;
  cin >> x >> y;
  ll l = -1;
  ll r = -1;
  if (x * (x + 1) <= y) {
    l = x;
    r = x + 1;
  } else {
    // we start searching for 1st non prime num from x to y , call it np , we
    // need to get np*spf as their lcm will be x
    ll start = x;
    ll spf;
    while (start <= y) {
      if (isPrime(start, spf) && start + spf <= y) {
        l = start;
        r = start + spf;
        break;
      } else {
        start++;
        vector<ll> divisors = getDivisors(start);
        sort(divisors.begin(), divisors.end());
        int n = divisors.size();
       for(int i=0;i<n;i++){
        ll attempt = start+divisors[n-i];    
        if(attempt<=y && attempt%start==0){
                l=start;
                r=attempt;
                break;
            }
       }
      }
    }
  }
  cout << l << " " << r << endl;
}

int main() {
  Mazen int t;
  cin >> t;

  while (t--) {
    solve();
  }
}