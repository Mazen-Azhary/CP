using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
ios_base::sync_with_stdio(0);                                                \
cin.tie(0);                                                                  \
cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
/* detecting cycles in an undirected graph is done by checking if I return to a prevously
 visited node in the path I am following , not if i visit a node twice in general

    1 --->2
    |     |
    |     |
    -->3<--
for example here there is no cycle although 3 is visited twice

we can have a vector/map to store state of node

0 unvisited
1 visited and not in my path
2 visited and in my path
*/
vector<vector<ll>> adj;
vector<short> visited;
bool notCycle = true;


void dfs(int u){
    
    visited[u]=2; // Mark the node as visited and in the current path

    for(auto v:adj[u]){

        if(!visited[v])
            dfs(v);
        else if(visited[v] == 2) {
            notCycle = false; // Found an edge to a node that is already in the current path
            return;
        }
    }
    visited[u] = 1; // Mark the node as visited and not in the current path
}


int main(){
    Mazen
    ll n, m;
    cin >> n >> m;
    adj.resize(n + 1,{});
    visited.resize(n + 1, 0);
    for(int i=1;i<=m;i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    // dfs(1);  //assuming the graph is connected and starting from node 1

    for(int i=1;i<=n;i++){
        if(!visited[i]) {
            dfs(i); // Run DFS from each unvisited node
            if(!notCycle) break; // If a cycle is found, no need to continue
        }
    }
    if(notCycle)
        cout << "Graph is acyclic" << endl;
    else
        cout << "Graph contains a cycle" << endl;
    return 0;
}