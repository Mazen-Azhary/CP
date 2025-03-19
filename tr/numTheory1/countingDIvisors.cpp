#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void solve(){
    int n;
    cin >> n;
    vector<int> divisors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i){
                divisors.push_back(n/i);
            }
        }
    }
    cout << divisors.size() << endl;
}



    int main(){
        Mazen;
        int t;
        cin >> t;
        while(t--){
            solve();
        }
    }