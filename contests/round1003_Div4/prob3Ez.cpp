#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
bool isSorted(vector<int> &a){
    for(int i=0; i<a.size()-1; i++){
        if(a[i] > a[i+1]){
            return false;
        }
    }
    return true;
}

void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int b;
    cin >> b;
    if(n==1){
        cout << "YES" << endl;
        return;
    }
    int NumOfProbs = 0;
    int MaxUptillNow = a[0];
    vector<int> probIndices;
    for(int i=0; i<n-1; i++){
        if(a[i] > MaxUptillNow){
            MaxUptillNow = a[i];
            continue;
        }
        if(MaxUptillNow < a[i+1]){
            NumOfProbs++;
            probIndices.push_back(i);
            MaxUptillNow = a[i+1];            
        }
    }
    for(int i=0; i<NumOfProbs; i++){
        a[probIndices[i]] =  b - a[probIndices[i]];
        if(isSorted(a)){
            cout << "YES" << endl;
            return;
        }
    }
    

    cout << "NO" << endl;
    //cout << NumOfProbs << endl;
}


int main()
{
    Mazen int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}