#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    Mazen
        vector <pair<int,int>> myV;
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        myV.push_back({num,i+1});
    }

    sort(myV.begin(), myV.end());int L = 0, R = n-1;
    if (((x > (myV[n-1].first + myV[n - 2].first) || (x < myV[0].first + myV[1].first)) && n > 1) || n<=1)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    while (L < R)
    {
        int sum = myV[L].first + myV[R].first;
        if (sum == x)
        {            
                cout << (myV[L]).second << " " << (myV[R]).second;            
            return 0;
        }
        else if(sum<x){
            L++;
        }else{
            R--;
        }
    }

        cout << "IMPOSSIBLE";
        return 0;
   
}