#include <iostream>
using namespace std;
#define ll unsigned long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n==1){
        if(arr[0]==0){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        return;
    }
    int cnt  = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
        }
        else{
            cnt = 0;
        }
        ans = max(ans,cnt);
    }
    cout << ans << endl;
}



int main(){
    Mazen
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}