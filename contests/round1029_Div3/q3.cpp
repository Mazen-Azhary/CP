#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;

void solve(){

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans =1 ;
    for(int i=1;i<n;i++){
        if(a[i]==a[0])
            ans++;
    }
    cout << ans << endl;
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