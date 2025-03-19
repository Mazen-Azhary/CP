#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


vector<int> getPrimeFactors(int n){
    vector<int> factors;
    for(int i = 2; i*i<=n; i++){
        while(n%i==0){
            factors.push_back(i);
            n/=i;
        }
    }
    if(n>1){
        factors.push_back(n);
    }
    return factors;
}    



int main(){
    Mazen;
    int n,k;
    cin >> n >> k;
    vector<int> factors = getPrimeFactors(n);
    if(factors.size()<k){
        cout << -1 ;
        return 0;
    }
    int lastFactor=n;
    for(int i=0; i<k-1; i++){
        cout << factors[i] << " ";
        lastFactor/=factors[i];
    }
    
    cout << lastFactor;


    return 0;
}