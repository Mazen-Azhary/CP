using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
void dfs(int i, int j, vector<vector<int>> &vis, vector<vector<bool>> &a, int n, int m) {
  if(i<1 || i>n || j<1 || j>m || vis[i][j] || a[i][j] == 0) {
    return; 
}
vis[i][j] = 1; 
dfs(i + 1, j, vis, a, n, m); 
dfs(i - 1, j, vis, a, n, m); 
dfs(i, j + 1, vis, a, n, m); 
dfs(i, j - 1, vis, a, n, m); 
}
int main() {
  Mazen int n, m;
  cin >> n >> m;
  vector<vector<bool>> a(n + 1, vector<bool>(m + 1, 0));
  char c;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> c;
      if (c != '#') {
        a[i][j] = 1; // empty space
      }
    }
  }
    vector<vector<int>> vis(n + 1, vector<int>(m + 1, 0));
    int rooms = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(!vis[i][j] && a[i][j]==1){
                dfs(i,j,vis,a,n,m);
                rooms++;
            }
        }
    }
    cout << rooms << endl;
  return 0;
}