#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main(){
    Mazen
    int n;
    cin >> n;
    //int numOfPrimes = n/log(n);
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;
    for(int i = 2; i*i <= n+1; i++){
        if(sieve[i]){
            for(int j = 2*i; j <= n+1; j += i){
                sieve[j] = false;
            }
        }
    }
    if(n==1){
        cout << 1 << endl << 1 << endl;
        return 0;
    }
    if(n==2){
        cout << 1 << endl << 1 << " " << 1 << endl;
        return 0;
    }
    cout << 2 << endl;
    
    
    for(int i=2;i<=n+1;i++){
        if(sieve[i]){
            cout << 1 << " ";
        }else{
            cout << 2 << " ";
        }
    }



    return 0;
}