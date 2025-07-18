using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;

void solve(){
int n;
cin >> n;
vector<int> a(n+1);
// vector<ll> nums;
int max = n;
int maxO = n/2+1;
for(int i=2;i<=n;i++){
    if(i%2==0){
        a[i]=max;
        max--;
    }else{
        a[i] = maxO;
        maxO--;
    }
}
a[1]=2;
a[n] = 1;



for(int i=1;i<=n;i++){
    cout << a[i] << " ";
    // cout << nums[i-1] << " ";
}
cout << endl;
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