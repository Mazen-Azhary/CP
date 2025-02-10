#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

class triple{
    public:
        int idx;
        int x;
        int y;
        triple(int idx, int x, int y){
            this->idx = idx;
            this->x = x;
            this->y = y;
        }
};


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    sort(b.begin(), b.end());
    vector<int> needed;
    int l=0;int r=1;
    while(a[r] >= a[l]){
        l++;
        r++;
        
    }
    int startOfProblem = l;
    //need to check for how many nums < a[startOfProblem] after start 
    vector <triple> neededTriples;
    for(int i=startOfProblem; i<n-1; i++){
        
        if(a[i] < a[startOfProblem]){
            int left,right;
            if(a[i-1]<a[startOfProblem]){
                left = a[startOfProblem] - a[i];
            }else{
                left = a[i-1]-a[i];                
            }

            if(a[i+1] < a[startOfProblem]){
                right = a[startOfProblem] - a[i+1];
            }else{
                right = a[i+1] - a[i];
            }

            
            neededTriples.push_back(triple(i, left, right));            
        }
    }
    if(neededTriples.size() > m){
        cout << "NO" << endl;
        return;
    }


    for (int i = l; i < n-1; i++) 
    {
        if (a[l] <= a[r])
        {
            l++;
            r++;
            continue;
        }
        else
        {
            needed.push_back(a[l] - a[r]);
            a[r] += a[l] - a[r];
        }
        l++;
        r++;
    }
    if (needed.size() > b.size())
    {
        cout << "NO" << endl;
        return;
    }
    sort(needed.begin(), needed.end());
    map<int, int> mp;
    for (int i = 0; i < needed.size(); i++)
    {
        int x = lower_bound(b.begin(), b.end(), needed[i]) - b.begin();
        if (mp.find(x) != mp.end())
        {
            x = upper_bound(b.begin(), b.end(), needed[i]) - b.begin();
            if (mp.find(x) != mp.end())
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            mp[needed[i]] = x;
        }
    }

    if (mp.size() < needed.size())
    {
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
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