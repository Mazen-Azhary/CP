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
    string original;
    cin >> original;
    transform(original.begin(), original.end(), original.begin(), ::tolower);
    for(int i=0;i<original.length();i++){
        char cur = original[i];
        if(cur == 'a' || cur == 'e' || cur == 'i' || cur == 'o' || cur == 'u' || cur == 'y'){
            continue;
        }
        
        cout << "." << cur;
    }


    return 0;
}