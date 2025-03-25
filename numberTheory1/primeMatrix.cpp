#include <iostream>
using namespace std;
#define ll unsigned long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

bool isPrime(int n) {
  if (n == 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  Mazen int n, m;
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  vector<int> primes;
  for (int i = 2; i <= 1e5+3; i++) {
    if (isPrime(i)) {
      primes.push_back(i);
    }
  }

  ll mini = 1e9;
  for (int i = 0; i < n; i++) {
    ll op = 0;
    for (int j = 0; j < m; j++) {
      int num = arr[i][j];
      int idx = (lower_bound(primes.begin(), primes.end(), num) - primes.begin());      
      if(!isPrime(num) && idx < primes.size())
        op += primes[idx] - num;
    }
    if(op < mini)
      mini = op;
  }

  for (int j = 0; j < m; j++) {
    int op = 0;
    for (int i = 0; i < n; i++) {
      int num = arr[i][j];      
      int idx = (lower_bound(primes.begin(), primes.end(), num) - primes.begin());
      if(!isPrime(num) && idx < primes.size())
        op += primes[idx] - num;
        
    }
    if(op < mini)
      mini = op;
  }

  cout << mini << endl;

  return 0;
}