#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
int main(){
    Mazen

    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << lower_bound(arr.begin(), arr.end(), target) - arr.begin() << endl; //number of elements less than target
    cout << upper_bound(arr.begin(), arr.end(), target) - arr.begin() << endl; //number of elements less than or equal target

    cout << n-(lower_bound(arr.begin(), arr.end(), target) - arr.begin()) << endl; //number of elements greater than or equal target
    cout << n-(upper_bound(arr.begin(), arr.end(), target) - arr.begin()) << endl; //number of elements greater than target



    return 0;
}