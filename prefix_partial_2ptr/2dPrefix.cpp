#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, cols;

    cin >> rows >> cols;
    vector<vector<int>> arr(rows + 1, vector<int>(cols + 1));    //(size,defaultVal)
    vector<vector<int>> prefix(rows + 1, vector<int>(cols + 1)); //(size,defaultVal)

    // cout << rows << cols << endl;
    int num;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cin >> arr[i][j];
            prefix[i][j] = arr[i][j];
        }
    }
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {

            prefix[i][j] += prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }

    int q;
    cin >> q;
    int R1, R2, C1, C2;
    while (q--)
    {
        cin >> R1 >> C1 >> R2 >> C2;

        //p[r2][c2] - p[r2][c1-1] - p[r1-1][c2] + p[r1-1][c1-1] 
        
        cout << prefix[R2][C2] - prefix[R2][C1 - 1] - prefix[R1 - 1][C2] + prefix[R1 - 1][C1 - 1];
    }

    return 0;
}