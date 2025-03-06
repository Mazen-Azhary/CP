#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>

bool isPrime(ll n){
    if(n<=1){
        return false;
    }
    vector<ll> divisors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if (i != n / i) {  
                divisors.push_back(n / i);  
            }
            if(divisors.size()>2){//primes have  2 divisors ,1 and itself only 
                return false;
            }
        }
        }
        return true;
}

int main(){
    ll n;
    cin >> n;
    if(isPrime(n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

}
