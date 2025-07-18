#include <bits/stdc++.h>
using namespace std;

#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
void solve() {
   string s;
   int n;;
    cin >> n;
    cin >> s;
    int len = s.length();
    char cur = '0';
    int changes = 0;
    if(s[0]=='1'){
        changes = 1;
        cur = '1';
    }

    for (int i = 1; i < len; i++) {
        if (s[i] != cur) {
            changes++;
            cur = s[i];
        }
    }
    if(changes>2)
        cout << len+(changes-2) << endl;
    else{
        if(changes==2 && s[0]=='1' && s[len-1]=='0'){
           len--; 
          // cout << "hello";
        }
        cout << len+changes << endl;
    }
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
