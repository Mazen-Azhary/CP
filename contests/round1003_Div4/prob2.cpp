#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

void solve(){
    string w;
    cin >> w;
    for(int i=0;i<w.size()-1;i++){
        if(w[i] == w[i+1]){
            cout << 1 << endl;
            return;}
    }
    cout << w.size() << endl;
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