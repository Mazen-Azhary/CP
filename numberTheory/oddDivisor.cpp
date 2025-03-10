#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
void solve(){
    ll n;
    cin >> n;

    
    if(n%2!=0){
        cout << "YES" << endl;
        return;
    }

    while(n%2==0){
        n/=2;
    }
    if(n==1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}


int main(){
    //https://codeforces.com/problemset/problem/1475/A
    Mazen
    int t;
    cin >> t;
    while(t--){
        solve();
    }



    return 0;
}