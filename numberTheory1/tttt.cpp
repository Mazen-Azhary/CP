#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
map<int, int> frequencyOfPrimeFactors;
int getMaxPowerIndex() {
  int maxPow = 0;
  for (auto i : frequencyOfPrimeFactors)
    maxPow = max(maxPow, i.second);
  return maxPow;
}
 
bool allNumbersInMapAre1() {
  for (auto i : frequencyOfPrimeFactors)
    if (i.second != 1)
      return false;
  return true;
}
 
bool iseven(int x) { return x % 2 == 0; }
 
int main() {
  // https://codeforces.com/problemset/problem/1062/B
  Mazen int n;
  cin >> n;
  vector<bool> sieve(n + 1, 1);
  vector<int> spf(n + 1, 0);
  sieve[0] = sieve[1] = 0;
  spf[0] = spf[1] = 1;
  for (int i = 2; i <= n; i++) {
    if (sieve[i]) {
      spf[i] = i;
      for (int j = i * 2; j <= n; j += i) {
        sieve[j] = 0;
        if (spf[j] == 0)
          spf[j] = i;
      }
    }
  }
  // int maxPow = 0;
  int operations = 0;
  int originalN = n;
  // while(sqrt(originalN)*sqrt(originalN) == originalN){
  //   originalN = sqrt(originalN);
  //   operations++;
  // }
  while (originalN != 1) {
    frequencyOfPrimeFactors[spf[originalN]]++;
    originalN /= spf[originalN];
  }
  if (sieve[n] || allNumbersInMapAre1()) {
    // cout << "hi";
    cout << n << " " << 0 << endl;
    return 0;
  }
  // the base case is that the number is prime or all its prime divisors appear
  // once in map if not then we raise all powers to the maxPow(if it's odd we
  // raise it by 1 first) to ensure sqrt is valid
  while (!allNumbersInMapAre1()) {
    int idx = getMaxPowerIndex();
    int maxPow = frequencyOfPrimeFactors[idx];
    if (!iseven(maxPow)) {
      frequencyOfPrimeFactors[idx]++;
      operations++;
    }
    for (auto &pair : frequencyOfPrimeFactors) {
      while (pair.second < maxPow) {
        pair.second++;
        operations++;
      }
    }
    for (auto &pair : frequencyOfPrimeFactors) {
      pair.second /= 2; // sqrt
    }
    operations++;
  }
  int finalNum = 1;
  
  for (const auto &pair : frequencyOfPrimeFactors) {
    if(sieve[pair.first])
    finalNum *= pair.first;
  
  }
  
  cout << finalNum << " " << operations << endl;
  return 0;
}