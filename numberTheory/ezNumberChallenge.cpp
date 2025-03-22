#include <iostream>
using namespace std;
#define ll long long
#include <bits/stdc++.h>

#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
vector<bool> isprime;
vector<ll> primes;
void sieve( ll n)
{
	isprime.resize(n + 1, true);
	isprime[0] = isprime[1] = false;
	for ( ll i = 2; i <= n; i++)
	{
		if (isprime[i])
		{
			primes.push_back(i);
			for ( ll j = i * i; j <= n; j += i)
				isprime[j] = false;
		}
	}
}
ll primeFact(ll n)
{
	 ll ans = 1;
	for ( ll i = 0; i < primes.size() ; i++)
	{
        if(!((primes[i] * primes[i]) <= n))
            break;
		 ll counter = 0;
		while (n % primes[i] == 0)
		{
			n /= primes[i];
			counter++;
		}
		ans *= (counter + 1);
	}
	if (n > 1)
		ans *= 2;
	return ans;
}
int main() {
  Mazen
      // https://codeforces.com/problemset/problem/236/B
      ll a,b, c;
      cin >> a >> b >> c;
    ll n=a*b*c;
    sieve(n);
    vector<ll> dn(1e6+1);
    dn[0]=dn[1]=1;
    for(ll i=2;i<=n;i++){
        dn[i] = primeFact(i);
    }
    ll ans=0;
    for(ll i=1;i<=a;i++){
        for(ll j=1;j<=b;j++){
            for(ll k=1;k<=c;k++){
                ans+=dn[i*j*k];
            }
        }
    }





    cout << ans % 1073741824 << endl;

  return 0;
}