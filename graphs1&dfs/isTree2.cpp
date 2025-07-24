using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;

//count connected components to test for tree
//if a graph is a tree , then it is 1 connected component and m = n-1 then it's a tree


vector<ll> connectedTemp;
vector<bool> visited;
vector<vector<ll>> adj;
void dfs(int u){
    visited[u] = true;
    connectedTemp.push_back(u); 
    for(auto v:adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}




int main(){
    Mazen
    int n,m;
    cin >> n >> m;
    visited.resize(n + 1, false);
    adj.resize(n + 1, {});
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<ll>> connectedComponents;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i);
            connectedComponents.push_back(connectedTemp); // Store the current component
            connectedTemp.clear(); // Clear the temporary vector for the next component
        }
    }
    if(m!=n-1 || connectedComponents.size() > 1){
        cout << "Graph is not a tree." << endl;
    }else{
        cout << "Graph is a tree" << endl;
    }


    return 0;
}