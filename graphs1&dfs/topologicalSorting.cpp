using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
ios_base::sync_with_stdio(0);                                                \
cin.tie(0);                                                                  \
cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
/*
    topo sort can be done using dfs or bfs 
    we will use dfs here

*/
vector<vector<ll>> adj;
vector<short> visited;
vector<ll> topoOrder;
bool notCycle = true;


void dfs(int u){
    
    visited[u]=2; 

    for(auto v:adj[u]){

        if(!visited[v])
            dfs(v);
        else if(visited[v] == 2) {
            notCycle = false;
            return;
        }
    }
    topoOrder.push_back(u); // Add the node to the topological order after visiting all its neighbors
    visited[u] = 1; // Mark the node as visited and not in the current path
}

int main(){
    Mazen
    ll n, m;
    cin >> n >> m;
    adj.resize(n + 1,{});
    visited.resize(n + 1, 0);
    for(int i=1;i<=m;i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    for(int i=1;i<=n;i++){
        if(!visited[i]) {
            dfs(i); 
            if(!notCycle) break; // If a cycle is found, no need to continue
        }
    }
    if(notCycle) {
        reverse(topoOrder.begin(), topoOrder.end()); // Reverse the order to get the correct topological sort
        for(auto node : topoOrder) {
            cout << node << " ";
        }
        cout << endl;
    } else {
        cout << "Graph has a cycle, topological sort not possible" << endl;
    }
    return 0;
}