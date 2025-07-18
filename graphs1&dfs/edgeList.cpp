using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
// #define endl '\n'
#define here cout << "here" << endl;

int main() {
  Mazen int n, m;
  cin >> n >> m;
  // this method shows each edge with its two vertices , this method is not
  // preferred

  // directed graph
  //  vector<pair<ll,ll>> edge_list(m);
  //  for(int i=0;i<m;i++)
  //      cin >> edge_list[i].first >> edge_list[i].second;

  // undirected
  set<pair<ll, ll>> edge_list;
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    edge_list.insert(make_pair(u, v));
    edge_list.insert(make_pair(v, u));
  }


  // for(int i=0;i<m;i++){
  //     cout << edge_list[i].first << "->" << edge_list[i].second  << endl;

  // }
  int q;
//   cout << "Enter number of queries: ";
  cin >> q;
  while (q--) {
    int u, v;
    cin >> u >> v;
    if (edge_list.find({u, v}) == edge_list.end()) {
      // edge not found
      cout << "Edge not found" << endl;
    } else {
      cout << "Edge found" << endl;
    }
  }

  return 0;
}