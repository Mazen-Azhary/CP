#include <iostream>
using namespace std;
#define ll unsigned long long
#include <bits/stdc++.h>
#define Mazen ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define here cout << "here" << endl;

int main(){
    Mazen
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int x = strcmp(s1.c_str(), s2.c_str());//c style str
    cout << x << endl;

    return 0;
}
