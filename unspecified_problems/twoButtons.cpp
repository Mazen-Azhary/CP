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



int main(){
    Mazen
    int n,m;
    cin >> n >> m;
    if(n>=m){
        cout << n-m << endl;
        return 0;
    }
    if(n==1){
        if(log2(m)==(int)log2(m)){
            cout << ceil(log2(m)) << endl;
            return 0;
        }
        else{
            cout << ceil(log2(m))+1 << endl;
            return 0;
        }
    }

    if(n==2 && m%n==0){
        cout << ceil(log2(m))+1 << endl;
        return 0;
    }
    int v1 = floor(m*1.0/n)+m/n;
    int v2 = log2(ceil(m/n)) + abs(m-ceil(m/n));

   cout << min(v1,v2) << endl;   
    return 0;
}