#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

int main() {
    //https://codeforces.com/problemset/problem/679/A
  Mazen vector<int> sieve(101, 1);
  sieve[0] = sieve[1] = 0;
  vector<int> primes;
  for (int i = 2; i <= 100; i++) {
    if (sieve[i]) {
      primes.push_back(i);
      for (int j = i * i; j <= 100; j += i) {
        sieve[j] = 0;
      }
    }
  }
  int yesCounts =0; // I will ask my queries on primes , if it's only one yes then the num
         // is prime , if two yesses then it's composite
         int idx=0;
         int q=0;
  for (int i = 0; i < primes.size(); i++) {
    if (q > 19) {
      break;
    }
    cout << primes[i] << endl;
    string s;
    cin >> s;
    if (s == "yes") {
      yesCounts++;
    }
    if (yesCounts == 2) {
      cout << "composite" << endl;
      return 0;
    }
    q++;
    fflush(stdout);
    if (idx <= 3) {//max perect square in range is 49
        cout << primes[i] * primes[i] << endl;
        cin >> s;
      if (s == "yes") {
          yesCounts++;
        }
        if (yesCounts == 2) {
            cout << "composite" << endl;
            return 0;
        }
        q++;
    }
    idx++;
  }

  cout << "prime" << endl;

  return 0;
}