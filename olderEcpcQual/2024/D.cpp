using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
void solve() {
  int n;
  cin >> n;
  vector<ll> a(n+1,0);
  vector<ll> b(n+1,0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
}
for (int i = 1; i <= n; i++) {
    cin >> b[i];
}
sort(a.begin() + 1, a.end());
sort(b.begin() + 1, b.end());


for(int i=1;i<=n;i++)i<a[i] += a[i - 1];
for(int i=1;i<=n;i++)b[i] += b[i - 1];
  
int i = n;
  while(i>0 && a[i] < b[i]) {
    i--;
  }
  cout << i << endl;

}

int main() {
  Mazen int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}