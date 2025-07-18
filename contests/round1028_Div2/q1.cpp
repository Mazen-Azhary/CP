using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;

void solve(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    
    if( c>=max(b,d) && a>=d){
        cout << "Gellyfish" << endl;
    }else if(c>=d && a>=d){
        cout << "Gellyfish" << endl;
    }else{
        cout << "Flower" << endl;
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