#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

class quad {
public:
    int val, prey, pred;
    quad(int val, int prey, int pred) {
        this->val = val;
        this->prey = prey;
        this->pred = pred;
    }
};

int main() {
    Mazen
    ll n, a, b;
    cin >> n >> a >> b;

    vector<ll> p(n);
    vector<quad> answer;

    for (ll i = 0; i < n; i++) {
        cin >> p[i];
        answer.push_back(quad(p[i], 0, 0));
    }
    sort(p.begin(),p.end());

    for(int i=0;i<n;i++){
        int prey = (upper_bound(p.begin(),p.end(),answer[i].val-a) - upper_bound(p.begin(),p.end(),answer[i].val-b))  ;
        int pred = (lower_bound(p.begin(),p.end(),answer[i].val+b) - lower_bound(p.begin(),p.end(),answer[i].val+a)) ;
        answer[i].pred = pred;
        answer[i].prey = prey;
    }

    for(int i=0;i<n;i++){
        cout << answer[i].pred << " " << answer[i].prey << endl;
    }



    return 0;
}