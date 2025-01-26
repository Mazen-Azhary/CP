#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
int main()
{
    Mazen
        string s;
    cin >> s;
    ll length = s.length();
    if (length < 26)
    {
        cout << -1 << endl;
        return 0;
    }
    map<char, ll> mp ;
    for(int i=0;i<26;i++){
        mp[('A'+i)] = 0;
    }
    ll L = 0;
    bool found=false;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < length; i++)
    {
        if (mp[s[i]] > 0)
        { // end of our interval as we have a repeated letter
            if (i - L + 1 >= 26)
            {
                found = true;
                for (int j = L; j < 26; j++)
                {
                    if (s[j] == '?')
                    {

                    }
                    else
                    {
                        cout << s[j];                        
                        mp.erase(s[j]);
                        
                    }
                }
            }
        }else if(mp[s[i]] == 1){
            mp.
        }
    }


    if(!found){
        cout << -1 << endl;
    }
    return 0;
}