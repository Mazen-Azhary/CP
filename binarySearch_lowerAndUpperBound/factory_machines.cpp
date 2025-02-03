#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

bool doable(vector<ll> &arr, ll t, ll mid, int n)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += mid / arr[i];
        if (sum >= t)
            return true;
    }
    // I want to know if I can produce t items in mid time , if not return 0
    //return sum >= t;
    return false;
}

signed main()
{
    Mazen
        ll n,
        t;
    cin >> n >> t;
    vector<ll> arr(n); // machine times
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    ll l = 1, r = 1e18;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (doable(arr, t, mid, n))
        {
            r = mid - 1; // because I want to find lowest number so if it's doable I will go left
            ans = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}