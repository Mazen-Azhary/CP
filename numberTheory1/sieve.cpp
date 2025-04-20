#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>

//sieve algor starts by assuming all nums from 2 to n are prime through a bool arr 
//then let's say it starts at 2 and then it says that 4,6,8,10,..... are not prime
//then it goes to 3,5,7 and so on so that in the end only prime nums are true in bool arr 
vector<ll> primeFactUsingSieve(ll n,vector<ll> &dividors){
    vector<ll> answer;   
    while(n!=1){
        answer.push_back(dividors[n]);
        n/=dividors[n];
        cout << answer.back() << " ";
    }
    cout << "done";
    return answer;
}
int main(){
    ll n = 1000000;
    vector<bool> prime(n+1,true);
    vector<ll> dividor(n+1,0);
    prime[0] = prime[1] = false;
    for (ll i = 2; i <= n; i++) {//O(nlog(logn))
        
        if (prime[i]==true) {
            dividor[i] = i;
            for (ll j = i+i; j <= n; j += i) {//start from first multiple of i and keep shifting to other multiples
                prime[j] = false;
                if(dividor[j]==0){
                    dividor[j] = i;//first dividor of yours is the smallest divisor , for prime factorization
                }
                //this can be used for prime factorization using sieve
            }
        }

    }   



    vector<ll> answer = primeFactUsingSieve(1000,dividor);
    
    return 0;
}   