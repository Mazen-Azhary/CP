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
void dfs(int u){
    visited[u] = true;
    for(auto v:adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}


int main(){
    //https://vjudge.net/contest/690295#problem/B
    Mazen
    ll n,m;
    cin >> n >> m;
    visited.resize(n+1,false);
    adj.resize(n+1,{});
    for(int i=1;i<=m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    if(m != n-1){
        cout << "NO" << endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;

}