#include <iostream>
using namespace std;
#define ll long long
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

int main() {
    Mazen
    string a;
    cin >> a;
    int b;
    cin >> b;

    ll ans = 0;
    ll power = 1; //10 pow idx

    for (int i = a.size() - 1; i >= 0; i--) {
        int digit = a[i] - '0';
        ans +=  (digit % b) * power % b;
        ans %= b;
        power = (power * 10) % b;//keep pow from 0 to b-1 to avoid overflow
    }

    cout << ans << endl;

    return 0;
}
