using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> connectedTemp;

void dfs(int u){
    visited[u] = true;
    connectedTemp.push_back(u);
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    Mazen
    int n,m;
    cin >> n >> m;
    adj.resize(n+1,{});
    for(int i=1;i<=m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    visited.resize(n+1,false);
    vector<vector<int>> connectedComponents;
    for(int i=1;i<=n;i++){
        if(visited[i]) continue;
        dfs(i);
        connectedComponents.push_back(connectedTemp);
        connectedTemp.clear();
    }
    cout << connectedComponents.size() - 1 << endl;

    for(int i=1;i<connectedComponents.size();i++){
        cout << connectedComponents[i-1][0] << " " << connectedComponents[i][0] << endl;
    }


    return 0;
}