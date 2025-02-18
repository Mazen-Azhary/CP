#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define ll long long

void solve(){
ll n;
cin >> n;
vector<ll> b(n,0);

for(int i = 1; i < n-1; i++){
    ll x;
    cin >> x;
    if(x==1){
        b[i] = 1;
    }
}

for(int i = 2; i < n-2; i++){

if(b[i-1]==1 && b[i+1]==1 && b[i]==0){
    cout << "NO" << endl;
    return;
}




}
cout << "YES" << endl;
}

int main(){
  Mazen

    ll t;
    cin >> t;
    while(t--){
        solve();
    }


  return 0;
}