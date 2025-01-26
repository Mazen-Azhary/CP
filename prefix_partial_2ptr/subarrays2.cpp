#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
int main(){
    Mazen;
    ll n,x;
    cin >> n >> x;
    vector<ll> v(0);
    vector<pair<ll,ll>> negatives;
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        ll num;
        cin >> num;
        if(num>0){
            v.push_back(num);
        }else{
            negatives.push_back({num,i});
        }
    }
    


    
//     ll L=0,R=0;
//     while(L<=R && R<=n){
//         ll dif = prefix[R]-prefix[L];
//         if(dif==x){
//             ans++;
//             L++;
//         }
//         else if(dif<x){
//             R++;
//         }
//         else{
//             L++;
//         }
//     }


// cout << ans << endl;


    return 0;
}