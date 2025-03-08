#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>

vector<ll> prime_factorization1(ll n) {
  vector<ll> factors;
  bool divided = false;
  while (n > 1) {
    for (ll i = 2; i * i <= n; i++) {
      // start from 2 as we don't want 1 , the num could be
      // 1*1*1*........*itself which is wrong

      if (n % i == 0) {
        factors.push_back(i);
        // let n  = 12 , we first find first dividor of 12 which is 2,
        //  then we let n=n/divisor which is n=12/2=6
        // then we break because we want to start again with first divisor of
        // new n we can say that we start with 12 then we find 2 we push it in f
        // then we take 6 then we push 2 llo f
        // then we take 3 then we push 3 llo f
        // then we take 1 then we break from outer loop
        n /= i;
        divided = true; // flag to check if it accepted any divisions for
                        // optimization purpose
        break;
      }
      // O(n) before opt , O(root(n)) after opt , W(logn)  , theeta(sqrt(n))
      // if num is prime then we do inner loop from 1 to n then we exit without
      // optimization , after opt it is O(sqrt(n))

      // if num is a power of 2 then we do 16->8->4->2->1 which is log2 n,same
      // for all prime bases

      // For most composite numbers, the largest prime factor is at most √n ,
      //  Thus, we only need to check divisibility up to √n at max in most
      //  cases.
    }
    if (!divided) { // if it didn't accept any division upto root
                    // n then it is prime
      //cout << "prime " << endl;
      factors.push_back(n);
      n = 1;      
    }
  }
  return factors;
}

vector<ll> prime_factorization2(ll n){//this is shorter form
    vector<ll> factors;
    for (ll i = 2; i * i <= n; i++) {//attempt divisions from 2 to sqrt(n)
        while (n % i == 0) {//as long as u can divide on num i keep going , for ex 26,18,9, then we break from while and increment i
        factors.push_back(i);
        n /= i;        
        }
    }
    if (n > 1) {//if no divisions push num itself
        factors.push_back(n);
    }
    return factors;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> factors = prime_factorization2(n);
  if (factors.size() > 0) {
    for (auto f : factors) {
      cout << f << " ";
    }
  } else {
   // cout << "No prime factors found";
  }
  return 0;
}