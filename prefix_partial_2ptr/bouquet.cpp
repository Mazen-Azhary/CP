#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
int main()
{
    Mazen ll q, n, m;
    cin >> q;
    while (q--)
    {
        cin >> n >> m;
        vector<ll> v(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<ll> prefix(n + 1, 0);
        sort(v.begin(), v.end());
        for (ll i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + v[i];
        }

        ll ans = 0;
        for(ll i=1;i<=n;i++){
            ll idx = upper_bound(v.begin(),v.end(),v[i]+1)-v.begin()-1; // نشوف الاول لو ممكن استخدم كل الارقام المتاحة معايا ف رينج معين يعني لو الفرق بينهم ب 1 , مثلا 1 1 2 2 2 3 نستخدم كله معدا ال3
            ll sum = prefix[idx]-prefix[i-1];
            if(sum<=m){
                ans = max(ans,sum);
            }
            ll idx2 = upper_bound(prefix.begin(),prefix.end(),prefix[i]+m)-prefix.begin()-1;//   هنا عايز اشوف لو مثلا محتاج استخدم جزء معين من الارقام المتاحة يعني بمسك الرقم اللي معايا ف البريفكس ازود عليه حرف ام عشان اشوف اكبر حاجة اقدر اوصلها من مكاني بعدها اشوف لو الرقم اقل من حرف ام و ف نفس الوقت الفرق بينه و بين اللي بيقابله ف البريفكس يبقي 1 عشان الكونديشن اللي ف السؤال
            sum = prefix[idx2]-prefix[i-1];
            if(v[idx2]<=v[i]+1 && sum<=m){
                ans = max(ans,sum);
            }
        }
            cout << ans << endl;




    }

    return 0;
}