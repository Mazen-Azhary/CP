#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define BIGGEST_PRIME 104730
vector<bool> is_prime(BIGGEST_PRIME + 1, true);
vector<ll> primes;
void solve() {
  int n;
  cin >> n;
  cout << primes[n - 1] << endl;
}

int main() {
  Mazen
    is_prime[0] = is_prime[1] = false;

  for (int i = 2;  i <= BIGGEST_PRIME; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
      for (int j = i *2; j <= BIGGEST_PRIME; j += i) {
        is_prime[j] = false;
      }
    }
  }

  ll t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}