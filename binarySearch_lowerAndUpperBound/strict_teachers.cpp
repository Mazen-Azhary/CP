#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> b(m, 0);
    vector<int> a(q, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        b[i]--;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    sort(b.begin(), b.end());
    for (int i = 0; i < q; i++)
    {
        int initialPosition = a[i];
        // I will try to get 2 closest teachers by creating an array of distances between all teachers and david , then I will sort it and get the 2 closest teachers

        vector<int> closestTeachers(2, 0);
        if (m > 1)
        {
            closestTeachers[0] = lower_bound(b.begin(), b.end(), initialPosition) - b.begin() - 1; // highest negative (on david's left)
            closestTeachers[1] = closestTeachers[0] + 1;                                           // highest positive (on david's right)
            // if two teachers are right or left of david we get closer one

            if (closestTeachers[0] < 0)
            { // no teacher on david's left
                closestTeachers[0] = closestTeachers[1];
                closestTeachers[1] = 0;
            }
            else if (closestTeachers[1] == m)
            { // no teacher on david's right
                closestTeachers[1] = 0;
            }

            // I have 3 cases , if david is between two teachers , or if we have one teacher and david is either closer to the left or the right
            // closest teacher[1] == 0 means we care about closest teacher[0] only
        }
        // | | | | | |T1| | | | | || |D| | | | | | \ |  | | |T2

        else
        {
            closestTeachers[0] = 0;
        }
        if (closestTeachers[1] == 0)
        { // only one teacher and david is to the sides
            int teacherPos = b[closestTeachers[0]];
            if (initialPosition - teacherPos > 0)
            {//david on right
            cout << n - teacherPos -1<< '\n';
            }
            else
            {//david on left
                cout << teacherPos  << '\n';
            }
        }
        else
        {
            cout << abs(b[closestTeachers[0]]  -b[closestTeachers[1]])/2 << '\n';
        }
    }
}
 
int main()
{
    Mazen int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}