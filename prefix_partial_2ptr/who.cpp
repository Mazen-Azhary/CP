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
    Mazen int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n + 1, vector<int>(m + 1, 0));
    vector<vector<int>> C(n + 1, vector<int>(m + 1, 0));
    vector<vector<int>> E(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char letter;
            cin >> letter;
            if (letter == 'a')
            {
                // cout << "in A" << endl;
                A[i][j] = 1;
            }
            else if (letter == 'c')
            {
                C[i][j] = 1;
            }
            else if (letter == 'e')
            {
                E[i][j] = 1;
            }
            A[i][j] += A[i - 1][j] + A[i][j - 1] - A[i - 1][j - 1]; // prefix
            C[i][j] += C[i - 1][j] + C[i][j - 1] - C[i - 1][j - 1];
            E[i][j] += E[i - 1][j] + E[i][j - 1] - E[i - 1][j - 1];
        }
    }

    int q, r1, c1, r2, c2;
    cin >> q;
    while (q--)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        cout << min(A[r2][c2] + A[r1-1][c1-1] - A[r2][c1-1] - A[r1-1][c2] ,min( C[r2][c2] + C[r1-1][c1-1] - C[r2][c1-1] - C[r1-1][c2],E[r2][c2] + E[r1-1][c1-1] - E[r2][c1-1] - E[r1-1][c2])) << endl;
    }

    return 0;
}