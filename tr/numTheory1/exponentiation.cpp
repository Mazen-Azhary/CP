#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
  const ll mod = 1e9 + 7;

// Function for modular exponentiation
ll mod_exponentiation(ll a, ll b, ll mod) {
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1)  
            result = (result * a) % mod;
        a = (a * a) % mod; 
        b /= 2;
    }
    return result;
}

void solve() {
    ll a, b;
    cin >> a >> b;
    cout << mod_exponentiation(a, b, MOD) << endl;
}

int main() {
    Mazen
    int t;
    cin >> t;
    while (t--)
        solve();
    
    return 0;
}
