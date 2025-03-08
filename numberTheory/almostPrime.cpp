#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define MAX 3000
bool sieve[MAX + 1];
bool almostPrime[MAX + 1];
int divisors[MAX + 1];

int main() {

  Mazen int n;
  cin >> n;

  fill(sieve, sieve + MAX + 1, true);
  fill(almostPrime, almostPrime + MAX + 1, true);
  fill(divisors, divisors + MAX + 1, 0);
  
  sieve[0] = sieve[1] = 0;
  almostPrime[0] = almostPrime[1] = 0;
  for (int i = 2; i <= MAX; i++) {
    if (divisors[i] == 0) {
      divisors[i] = i;
      almostPrime[i] = 0;
    }
    if (sieve[i]) {
      almostPrime[i] = 0;
      for (int j = i + i; j <= MAX; j += i) {
        sieve[j] = 0;
        divisors[j] = i;
      }
    }
  }
  set<int> uniqueDivisors;
  for (int i = 2; i <= MAX; i++) {
      if(!almostPrime[i]){
          continue;
        }
        int num = i;
        while(num>1){
            int oldNum = num;
            num/=divisors[num];
            if(uniqueDivisors.size()>2){
                //cout << "here" << endl;                
                almostPrime[i] = 0;
                break;
            }
            uniqueDivisors.insert(divisors[oldNum]);
        }
        if(uniqueDivisors.size()!=2){
            almostPrime[i] = 0;            
        }
        uniqueDivisors.clear();
    }
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        
        
        if(almostPrime[i]){
            ans++;
        }
    }
    cout << ans << endl;
  return 0;
}