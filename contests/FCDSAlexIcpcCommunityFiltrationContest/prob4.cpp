#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
ios_base::sync_with_stdio(0);                                                \
cin.tie(0);                                                                  \
cout.tie(0);
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    
    //nums from 1 to n in queue where front is 1
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    } 

    stack<int> s;
    //myval-1 have to be my lower bnd from my idx to the end
    //no the first approach was wrong , I can use a stack to push nums from 1 upto me inclusive 
    for(int i=1;i<=n;i++){
        int car = v[i];
        while(!q.empty() && q.front()<=car){
            s.push(q.front());
            q.pop();
        }
        if(s.top()!=car){
            cout << "NO" << endl;
            return;
        }
        s.pop();
    }

    cout << "YES" << endl;
}

int main(){
    Mazen
    int t;
    t=1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}