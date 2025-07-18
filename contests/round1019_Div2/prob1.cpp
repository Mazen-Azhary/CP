#include <bits/stdc++.h>
using namespace std;
#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
void solve() {
    int n;
    cin >> n;
    set<int> nums;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.insert(x);
    }
    cout << nums.size() << endl;
    
}

int main() {
    Mazen
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
