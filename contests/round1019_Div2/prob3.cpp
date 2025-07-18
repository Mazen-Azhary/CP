#include <bits/stdc++.h>
using namespace std;

#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
void solve() {
    ll n,k;
    cin >> n >> k;
    
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n==3){
     sort(a.begin(),a.end());
     if(a[1]<=k){
        cout << "YES" << endl;
     }else{
        cout << "NO" << endl;
     }   
     return;
    }
    //I want two non adjacent nums <= k 
    vector<pair<int,int>> nums; 
    for(int i=0;i<n;i++){
       if(a[i] <= k){
           nums.push_back({a[i],i});
       }
    }
    if (nums.size() < 2) {
        cout << "NO" << endl;
        return;
    }
   // sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size()-1;i++){
        int i2 = nums[i].second;
        for(int j=i+1;j<nums.size();j++){
        int i1 = nums[j].second;
        if(abs(i1-i2) > 1){
            cout << "YES" << endl;
            return;
        }
    }
    }
    cout << "NO" << endl;

}

int main() {
    Mazen
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
