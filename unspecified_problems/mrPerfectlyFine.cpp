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
void solve(){
    int n;
    cin >> n;
    vector<int> both;
    vector<int> fi;
    vector<int> se;
    for(int i = 0; i < n; i++){
        ll time;
        cin >> time;
        string s;
        cin >> s;
        if(s == "11"){
            both.push_back(time);
        }else if(s == "10"){
            fi.push_back(time);
        }else if(s=="01"){
            se.push_back(time);
        }
    }
    if((fi.size()==0||se.size()==0)&&both.size()==0){
        cout << -1 << endl;
        return;
    }
    ll minInBoth = INT_MAX;
    ll minInFi = INT_MAX;
    ll minInSe = INT_MAX;
    for(int i=0;i<both.size();i++){        
        if(both[i]<minInBoth){
            minInBoth = both[i];
        }
    }
    for(int i=0;i<fi.size();i++){
        if(fi[i]<minInFi){
            minInFi = fi[i];
        }
    }
    for(int i=0;i<se.size();i++){
        if(se[i]<minInSe){
            minInSe = se[i];
        }
    }
    if(minInBoth<minInFi+minInSe){
        cout << minInBoth << endl;
    }else{
        cout << minInFi+minInSe << endl;
    }
}


int main(){
    Mazen
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}