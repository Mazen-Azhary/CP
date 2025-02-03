#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long





bool doable(vector<ll> &a, vector<ll> &b, ll mid, ll k, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        if (a[i] * mid - (b[i]) > 0)
        {
            k -= (a[i] * mid - (b[i]));
        }
        if (k < 0)
            return false;
    }
    return !(k < 0);
}

int main()
{
    Mazen
        ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 1e10;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (doable(a, b, mid, k, n))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}