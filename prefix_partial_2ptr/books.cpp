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
    int n,t;
    cin >> n >> t;
    vector<ll> v(n+1,0);
    vector<ll> prefix(n+1,0);
    for(int i=1;i<=n;i++){
        cin >> v[i];
        prefix[i] = prefix[i-1]+v[i];
    }

    ll ans = 0;
    for(ll i=1;i<=n;i++){
        if(t-(v[i])<0){//this single number is unachievable
           //cout << "skipped" << endl;
            continue;
        }
        int idx = upper_bound(prefix.begin(),prefix.end(), prefix[i-1]+t)-prefix.begin()-1;
        ans = max(ans,idx-i+1); 

    }

cout << ans << endl;

    return 0;

}