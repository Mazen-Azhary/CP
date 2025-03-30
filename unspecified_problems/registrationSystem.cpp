#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'


int main(){
    Mazen
    int n;
    cin >> n;
    map<string, int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(mp.find(s) == mp.end()){
            cout << "OK" << endl;
            mp[s] = 1;
        }else{
            cout << s << mp[s] << endl;
            mp[s]++;            
        }
    }

    return 0;
}