#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

const int MAX = 10000000;
vector<int> divisors(MAX + 1, 0);
void solve() {
    int n;
    cin >> n;
    
    int evenCount = 0, oddCount = 0;

    while (n > 1) {
        int prime = divisors[n]; 
        int power = 0;

        while (n % prime == 0) {
            n /= prime;
            power++;
        }

        if (power % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    if (evenCount > oddCount) {
        cout << "Psycho Number\n";
    } else {
        cout << "Ordinary Number\n";
    }
}

int main() {
  // https://vjudge.net/contest/663313#problem/J
  Mazen
  for (int i = 2; i <= MAX; i++) divisors[i] = i; 
    
  for (int i = 2; i*i <= MAX; i++) {    
    if (divisors[i] == i) { 
        for (int j = i * i; j <= MAX; j += i) {
            if (divisors[j] == j) divisors[j] = i; 
        }
    }
  }

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}