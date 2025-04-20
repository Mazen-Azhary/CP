#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
// say I have nums 1 2 3 4 5 6 7 8 9 10 11 12 , pairs of divisors are (1,12)
// (2,6) (3,4) I want to find divisors so I say first num is x , and second is y
// x*y<=n
// x<=y<=(n/x)
// therefore x<=n/x, x^2<=n
// so I will loop on nums as long as x^2<=n and check for divisors
// num of divisors is even if n doesn't have sqrt integer
int main() {
    Mazen
  ll n;
  cin >> n;
  vector<ll> divisors;
  for (ll i = 1; i * i <= n; i++) { // complexity O(root n)
    if (n % i == 0) {
      divisors.push_back(i);
      if (i != n / i) { // Avoid printing the square root twice
        divisors.push_back(n / i);
      }
    }
  }

vector<vector<ll>> divisors2(n); //another way to find divisors , O(nlogn) , harmonic series
for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){
        divisors2[j].push_back(i); //this is O(const) but it is a large const when vec size increases so it might get time limit
    }
}
vector<vector<ll>> numOfDivisors(n); 
for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){
        numOfDivisors[j]++; 
    }

}

  sort(divisors.begin(), divisors.end());
  cout << divisors.size()  << endl;
  for (ll i = 0; i < divisors.size(); i++) {
    cout << divisors[i] << " ";
  }
}
