#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define MOD 1000000007

void solve(){
    ll base;
    ll exp;
    cin >> base >> exp;
    ll res=1;
    while(exp>0){
        if(exp&1){//if odd
            res=(res*base);
            res%=MOD;
            exp--;
        }else{
            base=(base*base);
            base%=MOD;
            exp>>=1;//divide by 2 , shift right
        }
    }
    cout << res << endl;
}

int main(){
    Mazen
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}