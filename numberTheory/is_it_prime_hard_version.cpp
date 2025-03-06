#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main() {
  Mazen
  ll n = 1e6;
  vector<bool> prime(n + 1, true);
  prime[0] = prime[1] = false;
  for (int i = 2; i <= n; i++) {
    if (prime[i]) {
      for (int j = i + i; j <= n; j += i) {
        prime[j] = false;
      }
    }
  }
  if(prime[12]){
    cout << "YES";
  }else{
    cout << "NO";
  }
}