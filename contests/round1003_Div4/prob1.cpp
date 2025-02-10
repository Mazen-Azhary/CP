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
        w.replace(w.rfind("u"), 1, "i");
        for(int i=0; i<w.size()-1; i++){
            cout << w[i];
        }
        cout << endl;
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