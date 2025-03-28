#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

int main(){
    Mazen
    int n;
    cin >> n;
    int nonSolved = 0;
    for(int i=0;i<n;i++){
       int numOfOnes = 0;
       int x;
       for(int j=0;j<3;j++){
           cin >> x;
           if(x==1){
               numOfOnes++;
           }
       }
       if(numOfOnes<2){
           nonSolved++;
       }       
    }
    cout << n-nonSolved << endl;

    return 0;
}