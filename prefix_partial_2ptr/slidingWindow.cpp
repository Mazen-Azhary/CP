#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    Mazen int n, k;
    cin >> n >> k;
    ll maxSum = 0;
    ll currentSum = 0;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        currentSum += arr[i];
    }
    maxSum = currentSum;
    int L = 0, R = k - 1;
    while (R < n)
    {
        int oldL = arr[L];
        currentSum-=oldL;
        if(R+1<n){  
        int newR = arr[R+1];
        currentSum+=newR;
        }
        L++;R++;
        maxSum=max(maxSum,currentSum);

    }

    cout << maxSum;

    return 0;
}
