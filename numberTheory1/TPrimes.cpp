    #include <iostream>
    using namespace std;
    #define ll long long
    #include <bits/stdc++.h>
    #define Mazen                                                                  \
    ios_base::sync_with_stdio(0);                                                \
    cin.tie(0);                                                                  \
    cout.tie(0);
    #define endl '\n'



    // int main() {
    // Mazen
    // int t;
    // cin >> t;
    // ll v[t];
    // for (int i = 0; i < t; i++) {
    //     cin >> v[i];
    // }

    // for (int j = 0; j < t; j++) {
    //     ll n = v[j];
    //     set<ll> divisors;
    //     for (ll i = 1; i * i <= n; i++) { // complexity O(root n)
    //     if (n % i == 0) {
    //         divisors.insert(i);
    //         if (i != n / i) { 
    //         divisors.insert(n / i);
    //         }
    //         if (divisors.size() > 3) {          
    //         break;
    //         }
    //         n/=i;
    //     }
    //     }
    //     if (divisors.size() == 3) {
    //         cout << "YES" << endl;
    //     } else {
    //         cout << "NO" << endl;
    //     }
    // }
    // }

    
    /*
    #include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
*/

bool isPrime(ll num) {
    if (num < 2) return false;
    for (ll i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    Mazen
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        
        ll root = sqrt(n);
        if (root * root == n && isPrime(root)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
