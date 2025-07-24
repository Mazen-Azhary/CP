using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
ios_base::sync_with_stdio(0);                                                \
cin.tie(0);                                                                  \
cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
vector<vector<ll>> adj;
vector<bool> visited;
bool notCycle = true;

void dfs(int u,int parent){
    
    visited[u]=true;
    if(!notCycle) return; // If a cycle has already been detected, exit early

    for(auto v:adj[u]){
        if(v==parent) continue; // Skip the parent node
        
        if(!visited[v])
            dfs(v,u);
        else{
            notCycle = false; // Found a back edge indicating a cycle
            return;
        }
    }
}


int main(){
    Mazen
    ll n, m;
    cin >> n >> m;
    adj.resize(n + 1,{});
    visited.resize(n + 1, false);
    for(int i=1;i<=m;i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i, -1); 
            if(!notCycle) break; 
        }
    }
    if(notCycle)
        cout << "Graph is acyclic" << endl;
    else
        cout << "Graph contains a cycle" << endl;
    return 0;
}