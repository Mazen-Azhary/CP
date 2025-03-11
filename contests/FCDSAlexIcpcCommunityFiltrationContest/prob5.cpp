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
    int t;
    cin >> t;
    queue <int> q;
    while(t--){
        int opcode,x;
        cin>>opcode>>x;
        if(opcode==1){
            q.push(x);
        }else{
            if(q.front()==x){
            cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
            q.pop();
        }



    }
    return 0;
}