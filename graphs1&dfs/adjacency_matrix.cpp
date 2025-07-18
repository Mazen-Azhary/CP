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
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> adjacency_matrix(n+1, vector<bool>(n+1, 0));
    // n inclusive, so we use n+1
    for(int i=1;i<m;i++){
        int u,v;
        cin >> u >> v;
        adjacency_matrix[u][v] = 1; // directed graph
        //adjacency_matrix[v][u] = 1; // undirected graph
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << adjacency_matrix[i][j] ;
        }
        cout << endl;   
    }


    int q;
    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        if (adjacency_matrix[u][v]) {
            cout << "Edge found" << endl;
        } else {
            cout << "Edge not found" << endl;
        }
    }
}