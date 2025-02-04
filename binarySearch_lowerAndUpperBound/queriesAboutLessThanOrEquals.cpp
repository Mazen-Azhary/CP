#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
int main()
{
    Mazen
        ll na,
        nb;
    cin >> na >> nb;
    vector<ll> a(na), b(nb);
    for (ll i = 0; i < na; i++)
        cin >> a[i];
    for (ll i = 0; i < nb; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    for (int i = 0; i < nb; i++)
    {
        cout << upper_bound(a.begin(), a.end(), b[i]) - a.begin()  << " ";
    }

    return 0;
}