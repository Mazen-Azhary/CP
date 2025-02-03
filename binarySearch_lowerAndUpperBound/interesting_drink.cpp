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

        int n,
        q;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cin >> q;
    while (q--)
    {
        int target;
        cin >> target;
        cout << upper_bound(arr.begin(), arr.end(), target) - arr.begin() << endl;
    }

    return 0;
}