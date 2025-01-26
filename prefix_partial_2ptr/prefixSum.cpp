#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> arr[i];
    }

    vector<int> prefix = arr;
    for (int i = 1; i < n + 1; i++)
    {
        prefix[i] += prefix[i - 1];
    }

    int q, L, R;
    cin >> q;
    while (q--)
    {
        cin >> L >> R;
        cout << prefix[R] - prefix[L - 1] << endl;
    }

    return 0;
}