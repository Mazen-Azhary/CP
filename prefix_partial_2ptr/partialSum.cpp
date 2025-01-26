#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    int n,q,L,R,X; cin >> n >> q;
    vector<int> arr(n+1);   
// the len of prefix should be n+2 , pre[0] is for 1 indexing , pre[n+1] should be for avoiding R+1 out of bounds
    while(q--){
        cin >> L >> R >> X;
        arr[L]+=X;
        if(R+1<=n)       
            arr[R+1]-=X;        
    }
    vector<int> prefix = arr;
    for(int i=1;i<=n;i++){
        prefix[i]+=prefix[i-1];
    }

    for(int i=1;i<n+1;i++){
       cout << prefix[i] << " ";
    }

    return 0;
}