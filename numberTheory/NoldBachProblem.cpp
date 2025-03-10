#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
vector<int> primes;

bool goldbach(int idx) {
  int l = idx - 2;
  int r = idx - 1;
  while (l >= 0) {
    int sum = primes[l] + primes[r] + 1;
    if (sum == primes[idx])
      return true;
    else if (sum > primes[idx]) {
      l--;
      r--;
    } else {
      return false;
    }
  }
  return false;
}

int main() {
  // https://codeforces.com/problemset/problem/17/A
  Mazen int n, k;
  cin >> n >> k;
  vector<bool> sieve(n + 1, true);
  sieve[0] = sieve[1] = false;
  for (int i = 2; i <= n; i++) {
    if (sieve[i]) {
      primes.push_back(i);
      for (int j = i * i; j <= n; j += i) {
        sieve[j] = false;
      }
    }
  }
  int cnt = 0;
  for (int i = 0; i < primes.size(); i++) { // 2,3,5,7 are not goldbach
    if (goldbach(i)) {
      cnt++;
      if (cnt == k) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;

  return 0;
}