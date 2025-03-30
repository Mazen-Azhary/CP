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
    int n,l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double first = a[0];
    double last = a[n-1];
    double maxDif = -1;
    for(int i = 1; i < n; i++)
    {
        maxDif = max(maxDif, (double)(a[i] - a[i-1]));
    }
    maxDif /= 2.0;
    double ans = max(maxDif, max(first, l - last));
    cout << fixed << setprecision(10) << ans << endl;




    return 0;
}