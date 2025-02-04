#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    vector<int> prefix(n, 0);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    while (q--)
    {
        int x;
        cin >> x;

        if(prefix[n-1]<x){
            cout << -1 << '\n';
            continue;
        }

        cout << lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin() + 1 << '\n';
    }
}

int main()
{
    Mazen int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}