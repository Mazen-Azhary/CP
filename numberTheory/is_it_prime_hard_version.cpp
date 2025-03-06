#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

vector<bool> prime(1e6 + 1, true);
void isPrime(ll n) {
  if (prime[n]) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}

int main() {
  Mazen 
  prime[0] = prime[1] = false;
  for (ll i = 2; i*i <= 1e6; i++) {
    if (prime[i]) {
      for (ll j = i * i; j <= 1e6; j += i) {
        prime[j] = false;
      }
    }
  }
  ll t;
  cin >> t;
  ll n;
  while (t--) {
    cin >> n;
    isPrime(n);
    cout << endl;
  }
} 