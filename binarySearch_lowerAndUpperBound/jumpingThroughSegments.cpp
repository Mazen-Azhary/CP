#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
ll n;

bool doable(vector<pair<ll, ll>> &segs, ll k)
{
    ll pos_min = 0, pos_max = 0;

    for (int i = 1; i <= n; i++)
    {
        pos_min = max(segs[i].first, pos_min - k);
        pos_max = min(segs[i].second, pos_max + k);
        if (pos_min > pos_max)
            return false;
    }
    return true;
}
void solve()
{
    cin >> n;
    vector<pair<ll, ll>> segs(n + 1, make_pair(0, 0));
    for (int i = 1; i <= n; i++)
    {
        cin >> segs[i].first >> segs[i].second;
    }

    ll l = 0;
    ll r = 1e9;
    ll k = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (doable(segs, mid))
        {
            k = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << k << '\n';
}

int main()
{
    Mazen

        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}