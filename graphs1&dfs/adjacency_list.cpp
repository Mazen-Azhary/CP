using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
// #define endl '\n'
#define here cout << "here" << endl;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<ll>> adj(n+1);
    for(int i=1;i<=m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
       // adj[v].push_back(u); // for undirected graph
    }
    // for(int i=1;i<=n;i++){
    //     cout << "Vertex " << i << ": ";
    //     for(auto v : adj[i]){
    //         cout << v << " ";
    //     }
    //     cout << endl;
    // }
    
}