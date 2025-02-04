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
    vector<int> b(n + 1, 0);
    vector<int> a(q + 1, 0);
    for (int i = 1; i < m + 1; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i < q + 1; i++)
    {
        cin >> a[i];
    }
    vector<int> distances(m + 1, 0);

    for (int i = 1; i < q + 1; i++)
    {
        int initialPosition = a[i];
        // I will try to get 2 closest teachers by creating an array of distances between all teachers and david , then I will sort it and get the 2 closest teachers
        for (int j = 1; j < m + 1; i++)
        {
            distances[j] = (b[j] - initialPosition);
        }

        vector<int> closestTeachers(2, 0);
        if (m > 2)
        {
            sort(distances.begin(), distances.end());
            closestTeachers[0] = lower_bound(distances.begin(), distances.end(), 0) - distances.begin() - 1;//highest negative (on david's left)
            closestTeachers[1] = lower_bound(distances.begin(), distances.end(), 0) - distances.begin();//highest positive (on david's right)
            // if two teachers are right or left of david we get closer one

        // I have 3 cases , if david is between two teachers , or if we have one teacher and david is either closer to the left or the right
            //closest teacher[1] == 0 means we care about closest teacher[0] only
            
                

        }
        else
        {
            closestTeachers[0] = b[1];
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