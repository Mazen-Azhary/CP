#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

int main() {
  Mazen ll n;
  int k;
  cin >> n >> k;
   
  vector<ll> divisors; 

   for (ll i = 1; i * i <= n; i++) {
      if (n % i == 0) {
          divisors.push_back(i);
          if (i != n / i) 
              divisors.push_back(n / i);
      }
  }

  sort(divisors.begin(), divisors.end());

  if (k > divisors.size()) {
      cout << -1;
  } else {
      cout << divisors[k - 1]; 
  }
  return 0;
}