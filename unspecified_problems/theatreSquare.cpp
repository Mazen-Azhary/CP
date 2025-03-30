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
    ll n,m,a;
    cin >> n >> m >> a;
    
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;



    return 0;
}