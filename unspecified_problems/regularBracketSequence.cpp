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
    string s;
    cin >> s;
    int n = s.size();
    int len = 0;
    int openBr = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]== '('){
            openBr++;
        }
        if(s[i]==')'){
            if(openBr > 0){
                openBr--;
                len+=2;
            }else{
                len=0;
                openBr=0;
            }
        }
        ans = max(ans, len);
    }
cout << ans << endl;

    return 0;
}