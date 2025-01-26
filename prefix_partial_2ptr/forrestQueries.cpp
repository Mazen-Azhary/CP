#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    Mazen
    int n, q;
    cin >> n >> q;
    //. empty , * tree
    vector<vector<int>> forest(n + 1, vector<int>(n + 1));
    char current;
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < n + 1; j++)
        {
            cin >> current;
            if(current=='*')
                forest[i][j]=1;
        }
    vector<vector<int>> prefix = forest;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            prefix[i][j] += prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }
    int x1, x2, y1, y2;
   
 
    while (q--)
    {
        cin >> y1 >> x1 >> y2 >> x2;
        cout << prefix[y2][x2] - prefix[y1 - 1][x2] - prefix[y2][x1 - 1] + prefix[y1 - 1][x1 - 1] <<endl;
    }

    return 0;
}