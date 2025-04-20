#include <iostream>
using namespace std;
#define ll unsigned long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;


int main(){
    Mazen
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
   int score = v[k-1];
   sort(v.begin(),v.end());
   int jump = lower_bound(v.begin(),v.end(),score)-v.begin();
   int ans = n - jump;
   for(int i=0;i<n;i++){
       if(v[i] == 0 && score==0){
           ans--;
       }
   }
   cout << ans << endl; 

    return 0;
}