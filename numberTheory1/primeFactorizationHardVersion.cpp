#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
#define endl '\n'
  cout.tie(0);
#define Nmax 1e6
vector<bool> isPrime(Nmax + 1, true);
vector<ll> divisors(Nmax + 1, 0);

void solve(){
    ll n;
    cin >> n;
    if(n==1){        
        return;
    }
    while(n!=1){
        cout << divisors[n] << " ";
        n /= divisors[n]; 
    }
    cout << '\n';
}


int main() {
  Mazen

      ll q;
  cin >> q;
  isPrime[0] = isPrime[1] = false;
  
  for (ll i = 2; i <= Nmax; i++) {
    if (isPrime[i]) {
      divisors[i] = i;
      for (ll j = 2*i; j <= Nmax; j += i) {
        if (divisors[j] == 0)
          divisors[j] = i;
        isPrime[j] = false;
      }
    }
  }
 

  while (q--) {
    solve();
  }
  return 0;
}