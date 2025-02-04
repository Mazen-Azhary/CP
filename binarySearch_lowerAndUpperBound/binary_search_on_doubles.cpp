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
    //F F F F F T T T T T , first T is the sqrt of n
    //we will make l = 1 and r = target then for the mid it will be a decimal and we will check if pow(mid,2) is less than n 
    //r=mid-1 is unacceptable here
    //while(r-l>=1e-6) is the best way to implement this
    ll n;
    cin >> n;//max 1e9
    long double l = 1, r = 1e9,mid,ans;
    while (r-l>=1e-6)
    {
        mid = (l + r) / 2;
        if (mid * mid >= n)
        {
            r = mid;
        }
        else
        {
            l = mid;
            ans = mid;
        }
    }


    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}