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







int main(){
    Mazen
    //https://codeforces.com/problemset/problem/330/B
    int n,m;
    cin >> n >> m;
    vector<bool> can(n+1, true);
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        can[u] = false;
        can[v] = false;
    }
    
    int centralIDX = -1;
    for(int i=1;i<=n;i++){
        if(can[i]){
            centralIDX = i;
            break;
        }
    }
    cout << n - 1 << endl;
    for(int i=1;i<=n;i++){
        if(i == centralIDX) continue;
        cout << centralIDX << " " << i << endl;
    }

}