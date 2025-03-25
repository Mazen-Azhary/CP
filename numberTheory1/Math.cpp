#include <iostream>
using namespace std;
#define ll unsigned long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
#include <cmath>
bool isPowerOf2(ll n) { return (n & (n - 1)) == 0; }
map<ll, int> frequencyOfPrimeFactors;

ll getMaxPowerFactor() {
  ll maxFactor = -1;
  int maxPow = -1;
  for (const auto &i : frequencyOfPrimeFactors) {
    if (i.second > maxPow) {
      maxPow = i.second;
      maxFactor = i.first;
    }
  }
  return maxFactor;
}
bool isPrime(int n) {
  if (n < 2)
    return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}
bool iseven(ll x) { return x % 2 == 0; }

bool isExponentOf2(ll x) { return x > 0 && (x & (x - 1)) == 0; }
void primeFactorize(ll n) {
  for (ll i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      frequencyOfPrimeFactors[i]++;
      n /= i;
    }
  }
  if (n > 1) {
    frequencyOfPrimeFactors[n]++;
  }
}

bool allNumbersInMapAre1() {
  for (const auto &i : frequencyOfPrimeFactors)
    if (i.second != 1)
      return false;
  return true;
}

signed main() {
  // https://codeforces.com/problemset/problem/1062/B
  Mazen ll n;
  cin >> n;
  if (n <= 3 || isPrime(n)) {
    cout << n << " " << 0 << endl;
   // cout << "here" << endl;
    return 0;
  }
  if (isExponentOf2(n)) {
    // cout << "here" << endl;
     vector<ll> powersOf2 = {1,   2,   4,    8,    16,   32,   64,   128,
                             256, 512, 1024, 2048, 4096, 8192, 16384};
     int add = 0;
     bool found = 0;
     // I want if num is 3 we let it be 4 , if it's smaller than 8 we let it be 8
     // , if it's smaller than 16 we let it be 16
     int idx = -1;
     for (int i = 0; i < powersOf2.size(); i++) {
       if (log2(n) == powersOf2[i]) {
         found = 1;
         idx =i;
         break;
       }
     }
     if(found){      
      cout << 2 <<" " << log2(powersOf2[idx]) << endl;
      return 0;
     }

       add = powersOf2[lower_bound(powersOf2.begin(), powersOf2.end(), log2(n)) -
             powersOf2.begin()];
  
     // cout << add << endl;
     
     cout << 2 << " " << ceil(log2(add))+1 << endl;
     return 0;
   }
  int operations = 0;
  while (n == (int)sqrt(n) * (int)sqrt(n) && n > 2) {
    n = sqrt(n);
    operations++;
  }
  primeFactorize(n);
  ll maxPowerFactor = getMaxPowerFactor();

  if (frequencyOfPrimeFactors[maxPowerFactor] == 1) {
    cout << n << " " << operations << endl;
    return 0;
  }

  ll finalNum = 1;
  for (const auto &pair : frequencyOfPrimeFactors) {
    finalNum *= pair.first;
  }

  cout << finalNum << " "
       << ceil(log2(frequencyOfPrimeFactors[maxPowerFactor])) + 1 + operations
       << endl;

  return 0;
}