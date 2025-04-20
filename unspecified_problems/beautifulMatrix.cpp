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
    int x, y;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            int v;
            cin >> v;
            if(v==1){
                x = i;
                y = j;
            }
        }        
    }
cout << abs(x-3) + abs(y-3) << endl;



    return 0;
}