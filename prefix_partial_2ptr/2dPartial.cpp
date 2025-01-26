#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define Mazen                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    Mazen int rows, cols, qx;
    cin >> rows >> cols >> qx;//n5aleeha n+2 3ashan e7na partial sum 3ayzeen 7eta fadya fel a5er
    
    vector<vector<int>> arr(rows + 2, vector<int>(cols + 2, 0)); //(size,defaultVal)

    int x1, y1, x2, y2, val;
    cout << "here1" << endl;
    while (qx--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> val;
        arr[x1][y1] += val;
        arr[x2 + 1][y1] -= val;
        arr[x1][y2 + 1] -= val;
        arr[x2 + 1][y2 + 1] += val; // partial
    }
cout << "here2" << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {

            arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }
cout << "here3" << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}