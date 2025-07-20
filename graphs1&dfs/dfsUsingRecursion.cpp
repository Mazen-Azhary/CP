using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
int n, m;
vector<bool> visited;
vector<vector<ll>> adj;

void DFS(int u){
visited[u]= true;
cout << u << " "; // Mark the current node as visited and print it

// Traverse all adjacent vertices of u
for(auto v:adj[u]){
    if(!visited[v]){
        DFS(v);
        //recursively visit the unvisited vertex v
    }
}
}



int main() {
    Mazen 
  cin >> n >> m;
  n++;
  adj.assign(n,{}); // Initialize adjacency list with n empty vectors
  visited.assign(n, false); // Initialize visited vector with false

    for (int i = 1; i <= m; i++) {
    ll u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u); //undirected graph
  }

  DFS(0); // Start DFS from vertex 0
  return 0;
}