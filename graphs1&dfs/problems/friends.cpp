using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
set<pair<int,int>> setA;
vector<vector<int>> adj;
vector<bool> visited(300001, false);
int dfs(int u){
    visited[u] = true;
    int count = 1;
    for(auto v:adj[u]){
        if(!visited[v]){
            count += dfs(v);
        }
    }
    return count;
}

void solve(){
    int n,m;    
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int u,v;
        cin >> u >> v;
        setA.insert({u,v});
        setA.insert({v,u});
    }
    adj.clear();
    adj.resize(n + 1,{});
    for(auto it:setA){
        adj[it.first].push_back(it.second);
    }
    int maxi = -1;
    for(int i=1; i<=n; i++){
        if(visited[i]) continue;
            int count = dfs(i);
            maxi = max(maxi, count);
    }
    cout << maxi << endl;
    fill(visited.begin() + 1, visited.begin() + n + 1, false);
    setA.clear();
}


int main(){
    //https://vjudge.net/contest/690295#problem/C
    Mazen
    int t;
    cin >> t;
    while(t--){
        solve();
    }




    return 0;
}