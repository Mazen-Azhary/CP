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
    int n;
    cin >> n;
    int num=0;
    while(n--){
        string s;
        cin >> s;
        if(s[0]=='+'||s[1]=='+'||s[2]=='+'){
            num++;
        }else{
            num--;
        }
    }
    cout << num << endl;
    

    return 0;
}