#include <iostream>
using namespace std;
#define ll unsigned long long
#include <bits/stdc++.h>
#define Mazen                                                                  \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;
bool iseven(int n) { return n % 2 == 0; }
bool isodd(int n) { return n % 2 != 0; }


int main(){
Mazen
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++) 
    cin >> arr[i];
int even=0,odd=0;
    for(int i=0;i<3;i++){
        if(iseven(arr[i])) even++;
        else odd++;
    }
//2 to 1 evens and odds

if(even>odd){
    for(int i=0;i<n;i++){
        if(isodd(arr[i]))
        {
            cout << i+1 << endl;
            return 0;
        }
    }
}else{
    for(int i=0;i<n;i++){
        if(iseven(arr[i]))
        {
            cout << i+1 << endl;
            return 0;
        }
    }
}


}