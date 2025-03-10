#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'



int main() {
    //https://codeforces.com/problemset/problem/893/B
  Mazen int n;
  cin >> n;
  vector<int> beautifulDivisors;
  int k=n;
  while(k>=0){
    //(2^(k-1))*((2^k)-1)
    int expression = pow(2,k-1)*(pow(2,k)-1); 
    beautifulDivisors.push_back(expression);
    k--;
  }  
  
  for(auto x:beautifulDivisors){
    if(n%x==0){
      cout << x << endl;
      return 0;
    }
}
  
  return 0;
}