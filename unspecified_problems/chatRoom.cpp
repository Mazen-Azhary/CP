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

    string hello = "hello";
    int index = 0;

    for (char c : s) {
        if (c == hello[index]) {
            index++;  
        }
        if (index == 5) {  
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}