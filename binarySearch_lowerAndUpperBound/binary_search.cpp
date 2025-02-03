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
    Mazen int n, target;
    cin >> n >> target;
    int l = 0;
    int r = n - 1;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);


    while (l <= r)//original implementation
    {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
        {
            cout << mid << endl;
            return 0;
        }
        else if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }


ll ans=0;
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






    return 0;
}