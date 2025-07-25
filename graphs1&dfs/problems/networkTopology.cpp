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
void dfs(int u) {
    visited[u] = true;
    for (auto v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }

}
bool isConnected(){
    visited.resize(adj.size(), false);
    int count = 0;
    for(int i=1; i<adj.size(); i++){
        if(!visited[i]){
            count++;
            if(count > 1) return false; 
            dfs(i);
        }
    }
}
int main() {
    Mazen
    // https://codeforces.com/problemset/problem/292/B
    int n,
    m;
    cin >> n >> m;
    adj.resize(n + 1, {});
    vector<int> numOfNeighbuors(n+1,0);
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    numOfNeighbuors[u]++;
    numOfNeighbuors[v]++;
  }
  sort(numOfNeighbuors.begin() + 1, numOfNeighbuors.end());
  // first test for bus , 2 nodes must have 1 neighbor and n-2 nodes have 2
  // neighbors
  if(!(numOfNeighbuors[1] != 1 || numOfNeighbuors[n-1] != 2 || numOfNeighbuors[n] != 2)) {
    cout << "bus topology" << endl;
    return 0;
  }
  //if not , we now test for star , all nodes have 1 neighbor but for 1 has n-1 neighbors
  if(numOfNeighbuors[1] == 1 && numOfNeighbuors[n] == n - 1 && numOfNeighbuors[n-1] == 1 && m==n-1) {
    cout << "star topology" << endl;
    return 0;
  }
    // if not , we now test for ring , all nodes have 2 neighbors and m == n creating a cycle
  if(m==n && numOfNeighbuors[n] == 2 && numOfNeighbuors[1] == 2) {
    cout << "ring topology" << endl;
    return 0;
  }
    cout << "unknown topology" << endl;
  return 0;
}