using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
vector<vector<ll>> adj;
vector<bool> visited;
vector<ll> connectedTemp;
void dfs(ll u){
    visited[u] = true;
    connectedTemp.push_back(u);
    for(ll v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    Mazen
    ll n,m;
    cin >> n >> m;
    adj.resize(n+1,{});
    vector<ll> prices(n+1,0);
    for(ll i=1;i<=n;i++){
        cin >> prices[i];
    }
    for(ll i=1;i<=m;i++){
        ll u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    visited.resize(n+1,false);
    vector<vector<ll>> connectedComponents;
    for(ll i=1;i<=n;i++){
        if(visited[i]) continue;
        dfs(i);
        connectedComponents.push_back(connectedTemp);
        connectedTemp.clear();
    }
    ll sum=0;
    for(ll i=0;i<connectedComponents.size();i++){
        ll min = 10000000000;
        for(ll j=0;j<connectedComponents[i].size();j++){
            if(prices[connectedComponents[i][j]] < min){
                min = prices[connectedComponents[i][j]];
            }
        }
        sum += min;
        // sum += prices[connectedComponents[i][0]];
    }
    cout << sum << endl;
    // for(ll i=0;i<connectedComponents.size();i++){
    //     sort(connectedComponents[i].begin(),connectedComponents[i].end());
    // }
    return 0;
}