#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

void solve(){
        ll n,k,p;
        cin >> n >> k >> p;
        k=abs(k);
        p=abs(p);

        if(k%p==0&&(k*1.0/p)<=n){
            cout << ceil(k/p) << endl;
            return;
        }
        if((k*1.0/p)<=n){
            cout << ceil(k/p)+1 << endl;
            return;            
        }

    
        cout << -1 << endl;
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