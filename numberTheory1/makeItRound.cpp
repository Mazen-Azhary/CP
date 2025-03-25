#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

int countFactor(ll n,int factor){
    int count=0;
    while(n%factor==0){
        count++;
        n/=factor;
    }
    return count;
}



void solve(){
    int n,m;
    cin >> n >> m;  
    ll k=1;
    int cnt2= countFactor(n,2);
    int cnt5= countFactor(n,5);
    
    while (k * 2 <= m && cnt2 < cnt5) {
        k *= 2;
        cnt2++;
    }
    //these two loops adjust cnt2 to be equal to cnt5 to ensure max trailing zeros 
    while (k * 5 <= m && cnt5 < cnt2) {
        k *= 5;
        cnt5++;
    }
    //the 2's and 5's left in m can be shown as 10's so as long as we can , we multiply by 10
    while (k * 10 <= m) {
        k *= 10;
    }
    k = m - (m % k);//maximize k but make it still below m
    cout << n*k << endl;
}



int main(){
    //https://codeforces.com/problemset/problem/1759/D
    Mazen
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}