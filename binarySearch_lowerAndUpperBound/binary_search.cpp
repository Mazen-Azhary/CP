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
    Mazen int n, target,q;
    cin >> n >> q;
    int l = 1;
    int r = n;
vector<int> arr(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    // while (l <= r)//original implementation
    // {
    //     int mid = (l + r) / 2;
    //     if (arr[mid] == target)
    //     {
    //         cout << mid << endl;
    //         return 0;
    //     }
    //     else if (arr[mid] < target)
    //     {
    //         l = mid + 1;
    //     }
    //     else
    //     {
    //         r = mid - 1;
    //     }
    // }

while(q--){
cin >> target;
ll ans=-1;
    while (l <= r)//original implementation
    {
        int mid = (l + r) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            r = mid - 1;
        }        
        else
        {
            l = mid + 1;
        }
    }
    l=1;
    r=n;
    if (arr[ans] == target)
        cout << ans << '\n';
    else
    {
        cout << -1 << '\n';
    }
}




    return 0;
}