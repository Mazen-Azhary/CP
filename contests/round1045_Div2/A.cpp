#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;

void solve(){
ll a,b,x,y;
cin >> a >> b >> x >> y;
ll ans = -1;
bool alwaysAdd = x<=y;
if(a<b){
if(alwaysAdd){
    cout << x*(b-a) << endl;
    return;
}else{
    ll attempt = 0;
    while(a!=b){
        if(a^1==b){
            attempt+=y;
            a++;
        }
        else if(a%2!=0){
            a++;
            attempt+=y;
        }else{
            a++;
            attempt+=x;
        }
    }
    cout << attempt << endl;
    return;
}

}
}


int main(){
    Mazen
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}