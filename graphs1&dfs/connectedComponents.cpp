using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
ios_base::sync_with_stdio(0);                                                \
cin.tie(0);                                                                  \
cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
vector<int> componentsTemp; // To store the current connected component


void DFS(int u, vector<vector<int>>& adj, vector<bool>& visited){
visited[u]= true;

cout << u << " "; // Mark the current node as visited and print it

componentsTemp.push_back(u); // Add the current node to the current component

// Traverse all adjacent vertices of u
for(auto v:adj[u]){
    if(!visited[v]){
        DFS(v, adj, visited);
        //recursively visit the unvisited vertex v
    }
    // cout << endl;
}
}


int main(){
    Mazen
    int n,m;
    cin >> n >> m;
    vector<bool> visited(n + 1, false);
    vector<vector<int>> adj,connectedComponents;
    adj.resize(n + 1,{});
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;
    for(int i=1 ; i<=n ; i++){
        if(!visited[i]){
            ans++;
            DFS(i, adj, visited);

            //if i need to store vector of vectors of connected components

            connectedComponents.push_back(componentsTemp); // Store the current component
            componentsTemp.clear(); // Clear the temporary vector for the next component
            cout << endl;
        }
    }

    cout << "Number of connected components: " << ans << endl;

    return 0;
}