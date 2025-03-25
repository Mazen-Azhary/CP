#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

bool isPrime(ll n) {
  if (n == 2)
    return true;
  if (n % 2 == 0)
    return false;
  for (ll i = 3; i * i <= n; i += 2) {
    if (n % i == 0)
      return false;
  }
  return true;
}

void Factorize(ll q, vector<ll> &divisors) {
    for (ll i = 2; i * i <= q; i++) {
        if(q % i == 0) {
          if(!isPrime(i)){
              divisors.push_back(i);
            }          
            if (i != q / i) {
                if(!isPrime(q / i))
                divisors.push_back(q / i);
            if(i>2000)
              break;
        }
      }
    }
}

int main() {
    //https://codeforces.com/contest/150/problem/A
  Mazen ll q;
  cin >> q;
  bool end = false;
  while (!end) {
    if (q == 1 || isPrime(q)) {
      cout << 1 << endl;
      cout << 0 << endl;
      break;
    }

    vector<ll> divisors;
    Factorize(q, divisors);
    sort(divisors.begin(), divisors.end());
  if(divisors.size()==0){
    cout << 2 << endl;
    return 0;
  }else{
    cout << 1 << endl;
    cout << divisors[0] << endl;
    return 0;
  }

}

  return 0;
}