#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;

void solve(){
int n,x;
cin >> n >> x;
vector<int> a(n+1, 1);
int firstZero, lastZero=-1;
bool first = true;
for(int i=1; i<=n; i++){
    cin >> a[i];
    if(a[i]==1){
        if(first){
            firstZero = i;
            first = false;
        }
        lastZero = i;
    }
}
if(firstZero!= -1 && lastZero !=-1){
    if(lastZero - firstZero + 1 <= x){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}else
    cout << "YES" << endl;

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