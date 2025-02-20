#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define ll long long

bool doable(vector<ll> &arr, ll mid, ll k) {
  ll sum = 0, subarrays = 1;

  for (ll x : arr) {
    if (sum + x > mid) {
      subarrays++;
      sum = x;
      if (subarrays > k)
        return false;
    } else {
      sum += x;
    }
  }
  return true;
}
int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(n);
  ll l = 0, r = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    r += arr[i];
        l = max(l, arr[i]);
  }

  ll ans = r;
  while (l <= r) {
    ll mid = (l + r) / 2;
    if (doable(arr, mid, k)) {
      ans = mid;
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  cout << ans << endl;
}