#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
map<int, int> mp;
int toInteger(char c) {
  if (isdigit(c))
    return c - '0';
  return int(c);
}

void solve() {
    bool prime;
    bool answer = false;
  string input;
  cin >> input;
  int n = input.size();
  mp.clear();
  for (int i = 0; i < n; i++) {
    mp[toInteger(input[i])]++;
  } // now we want to loop on mp elements to get dividors upto sqrt the num , if
    // we find more than two dividors then it's not prime
  vector<int> divisors;
  for (auto &[key, currentFreq] : mp) {
    divisors.push_back(1);
    prime = true;
    for (int j = 2; j * j <= currentFreq; j++) {
      while (currentFreq % j ==0) { // as long as u can divide on num i keep going , for ex
                  // 26,18,9, then we break from while and increment i
        divisors.push_back(j);
        currentFreq /= j;
        if (divisors.size() > 2) {
            prime = false;
            break;
        }
    }
}
if(currentFreq > 1){
    divisors.push_back(currentFreq);
}
if(!prime || divisors.size() != 2){
    divisors.clear();
    continue;
}

cout << char(key);
answer = true;
divisors.clear();
}
if(!answer){
    cout << "empty";
}

cout << endl;
}

int main() {
  Mazen int t;
  cin >> t;
  for(int i=1;i<=t;i++) {
    cout << "Case " << i << ": ";
    solve();
   // cout << endl;
  }

  return 0;
}