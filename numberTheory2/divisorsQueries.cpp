#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


int main(){
    Mazen
    int n = 1e5;
    vector<vector<int>> divisors(n+1); 
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            divisors[j].push_back(i); 
        }
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
       for(int i=0;i<divisors[x].size();i++){
            cout << divisors[x][i] << " ";
        }
        cout << endl;
    }



    return 0;
}