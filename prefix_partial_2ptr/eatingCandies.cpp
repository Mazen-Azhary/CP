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
    Mazen int q, n, L, R;
    cin >> q;
    while (q--)
    {

        cin >> n;
        if (n == 0 || n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        vector<int> v(n + 1,0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<int> prefixForAlice = v;
        vector<int> suffixForBob = v;

        for (int i = 1; i <= n; i++)
        {
            prefixForAlice[i] += prefixForAlice[i - 1];
        }
        for (int i = n-1; i >= 1; i--)
        {
            suffixForBob[i] += suffixForBob[i + 1];
        }

        // for(int i=0;i<=n;i++){
        //     cout << prefixForAlice[i] << " ";
        // }
        // cout << endl;
        // for(int i=0;i<=n;i++){
        //     cout << suffixForBob[i] << " ";
        // }
        // cout << " debug:" << L << ":" <<v[L] << " " << R << ":" <<v[R]<< endl;
        L = 1;
        R = n;
        int total = 0;
        while (L < R)
        {

            if (prefixForAlice[L] == suffixForBob[R])
            {
                // cout << (L + 1 + (n - (R))) << endl;
                total = max(total, L + (n + 1 - R));
                L++;
            }
            else
            {

                if (prefixForAlice[L] < suffixForBob[R])
                {
                    L++;
                }
                else
                {
                    R--;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}