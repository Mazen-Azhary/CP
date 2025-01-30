#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
signed main()
{
    Mazen int n, m, k;
    cin >> n >> m >> k;

    vector<tuple<int, int, int>> o(1,{0,0,0}); // operation tuples : left right and val
    vector<int> v(n + 2, 0);
    vector<int> operations(m+2, 0);

    

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    } // original arr

    vector<int> prefix(n+2,0); 
    for (int i = 1; i <= m; i++)
    {
        int l, r, val;
        cin >> l >> r >> val;
        o.push_back(make_tuple(l, r, val));
    }

    for (int i = 1; i <= k; i++)
    {

        int l, r;
        cin >> l >> r;
        operations[l]++;
        operations[r + 1]--;
    } // do partial sum on number of operations in an array of itself

    for (int i = 1; i <= m; i++)
    {
        operations[i] += operations[i - 1]; // prefix sum on operation array
    }

    for (int i = 1; i <= m; i++)
    {
        int left = get<0>(o[i]);
        int right = get<1>(o[i]);
        int val = get<2>(o[i]);
        prefix[left] += (operations[i] * val);
        prefix[right + 1] -= (operations[i] * val);
        // v[o[i][0]]+=operations[i]*o[i][2];
        // v[o[i][1]+1]-=operations[i]*o[i][2];
    } // do partial sum on number of operations in an array of itself

    for (int i = 1; i <= n; i++)
    {
        prefix[i] += prefix[i - 1];
    } 

    for (int i = 1; i <= n; i++)
    {
        v[i] += prefix[i];
    }
    



    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}