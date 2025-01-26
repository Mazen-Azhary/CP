#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main(){
    Mazen
    int n = 8;vector<int> arr = {1,2,1,3,2,7,4,2};
    int l=0,r=1;
    int currentLen=1;
    int maxi = currentLen;
        
    while(r<n){
        if(arr[l]!=arr[r]){
            currentLen++;
            r++;
        }else{
            maxi = max(maxi,currentLen);
            currentLen--;
            l++;
        }
    }

    cout << maxi;

    return 0;
}