using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;

//if graph is a tree , in dfs each node should be visited once only and m = n - 1

bool dfs(int u, int parent) {
  visited[u] = true;
  for (auto v : adj[u]) {
    if (visited[v] && v != parent) {
      return false; // If we find a visited node other than that we came from, it's not a tree
    }
    if (!visited[v]) {
      dfs(v, u);
    }
  }
  return true;
}

int main() {
  Mazen int n, m;
  cin >> n >> m;
  visited.resize(n + 1, false);
  adj.resize(n + 1, {});
  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  if (m != n - 1) {
    cout << "Graph is not a tree." << endl;
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      if (!dfs(i, -1)) {
        cout << "Graph is not a tree." << endl;
        return 0;
      }
    }
  }

  cout << "Graph is a tree" << endl;


  // I can also check if it's 1 connected component and if no cycle then m = n-1 , rather than checking if each node is visited once only
  return 0;
}