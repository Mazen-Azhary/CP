#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'

int divideBy2and3(ll num) {
  while (num % 2 == 0) {
    num /= 2;
  }
  while (num % 3 == 0) {
    num /= 3;
  }
  return num;
}

int main() {
  Mazen int n, max = -1;
  cin >> n;
  ll arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > max)
      max = arr[i];
  }
  int num = divideBy2and3(max);
  if (max == 1) {
    cout << "Yes";
    return 0;
  }
  for (int i = 0; i < n; i++) {
    if (divideBy2and3(arr[i]) != num && num!=arr[i]) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}