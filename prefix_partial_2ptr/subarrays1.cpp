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
    vector<ll> v(n+1,0);
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        cin >> v[i];
    }
    vector<ll> prefix(n+1,0);
    for(ll i=1;i<=n;i++){
        prefix[i] = prefix[i-1]+v[i];
    }
    ll L=0,R=0;
    while(L<=R && R<=n){
        ll dif = prefix[R]-prefix[L];
        if(dif==x){
            ans++;
            L++;
        }
        else if(dif<x){
            R++;
        }
        else{
            L++;
        }
    }


cout << ans << endl;


    return 0;
}