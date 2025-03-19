#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

bool isPrime(ll n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    Mazen
    int n;
    cin >> n;
    while (n--) {
        ll num;
        cin >> num;
        ll sqrtValue = llround(sqrt(num)); // round for ll
        if (isPrime(sqrtValue) && sqrtValue*sqrtValue == num) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

   // cout << llround(sqrt(5)) << endl;

    return 0;
}
