    #include <iostream>
    using namespace std;
    #define ll long long
    #include <bits/stdc++.h>
    #define Mazen                     \
        ios_base::sync_with_stdio(0); \
        cin.tie(0);                   \
        cout.tie(0);
    #define endl '\n'
    #define MOD 1000000007

    vector<int> spf(1e7+1,0);



    int main(){
        Mazen
        spf[0]=spf[1]=1;
        for(ll i=2;i<=1e7;i++){          
            if(spf[i]==0){
                spf[i]=i;
                for(ll j=i*i;j<=1e7;j+=i){
                if(spf[j]==0)   
                    spf[j]=i;   
                }
            }
        }
        unordered_map<int,int> primeFactorsFreq;
        int n;
        cin >> n;
        vector<int> a(n);
        for(ll i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++){
            int x=a[i];
            while(x!=1){
                primeFactorsFreq[spf[x]]++;
                x/=spf[x];
            }
        }
    ll res=1;
        for( auto it:primeFactorsFreq){
            res = (res%MOD) * ((it.second+1)%MOD);
            res%=MOD;
        }
        
        cout << res << endl;
        return 0;
    }