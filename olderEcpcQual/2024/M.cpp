using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
void solve(){
ll n,q,x,i;
string s;
cin >> n;
cin >> s;
cin >> q;

multimap<ll,ll> m;
for(int i=0;i<n;i++){
    m.insert({s[i] - 'a', i});
}

while(q--){
    cin >> x >> i;
    x %= n; 
    for(auto it:m){
        it.second -=x ;
        if(it.second < 0){
            it.second += n;
        }
    }
    cout << m[i].first << endl;
}


}

int main(){
    Mazen
    int t=1;
    cin >> t;
    while(t--){
        solve();

    }


    return 0;
}