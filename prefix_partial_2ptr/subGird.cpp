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
    Mazen int q;
    cin >> q;
    while (q--)
    {
        int w, h, n, x1, y1, x2, y2;
        cin >> w >> h >> n;
        vector<vector<int>> grid(w + 2, vector<int>(h + 2, 0));
        while (n--)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 > x2)
                swap(x1, x2);
            if (y1 > y2)
                swap(y1, y2);
            grid[x1][y1]++;
            grid[x2 + 1][y1]--;
            grid[x1][y2 + 1]--;
            grid[x2 + 1][y2 + 1]++;
        }

        for (int i = 1; i <= w; i++)
        {
            for (int j = 1; j <= h; j++)
            {
                grid[i][j] += grid[i - 1][j] + grid[i][j - 1] - grid[i - 1][j - 1]; // prefix
            }
        }

        ll emptyGrids = 0;
        for (int i = 1; i <= w; i++)
        {
            for (int j = 1; j <= h; j++)
            {
                if (grid[i][j] == 0)
                    emptyGrids++;
            }
        }

        cout << emptyGrids << endl;
    }

    return 0;
}