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
    Mazen;
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if(x == 0 && y == 0 && z == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;



}