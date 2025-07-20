using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;

void DFS(vector<vector<ll>> &adj, int &n) {
  stack<ll> s;
  vector<bool> visited(n, false);
  visited[0] = true;
  s.push(0);

  while (!s.empty()) {
    ll node = s.top();
    s.pop();
    cout << node << " ";

    for (auto it : adj[node]) {
      if (!visited[it]) {
        visited[it] = true;   
        s.push(it);
      }
    }
  }
}

int main() {
  Mazen int n, m;
  cin >> n >> m;
  n++;
  vector<vector<ll>> adj(n);
  here

      for (int i = 1; i <= m; i++) {
    ll u, v;
    cin >> u >> v;
    // u--;v--; // Adjusting for 0-based indexing if needed
    adj[u].push_back(v);
    adj[v].push_back(u); // undirected graph
  }

  DFS(adj, n);
  return 0;
}