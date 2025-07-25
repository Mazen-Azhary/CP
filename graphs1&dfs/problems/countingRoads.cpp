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



int main(){
    //https://atcoder.jp/contests/abc061/tasks/abc061_b?lang=en
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
    for(int i=1;i<=n;i++){
        cout << adj[i].size() << endl;
    }
}