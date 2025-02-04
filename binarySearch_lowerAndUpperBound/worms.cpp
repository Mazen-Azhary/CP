#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
int main(){
    Mazen
    ll n;
    cin >> n;
    vector<ll> worms(n);    
    for(int i = 0; i < n; i++){
        cin >> worms[i];
    }
    vector<ll> prefix(n);
    prefix[0] = worms[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + worms[i];
    }    
    


    ll q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout << lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin() + 1 << endl;

    }




    return 0;

}