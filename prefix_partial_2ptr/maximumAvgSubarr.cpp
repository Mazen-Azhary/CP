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
        vector<int>
            nums = {4433, -7832, -5068, 4009, 2830, 6544, -6119, -7126, -780, -4254, -8249, -9168, 9492, 402, 5789, 6808, 8953, 5810, -7353, 7933, 4766, 5182, -3230, -1989, 5786, 6922, -4646, 4415, -9906, 807, -6373, 3370, 2604, 8751, -9173, -2668, -6876, 9500, 3465, -1900, 4134, -1758, -1453, -5201, -9825, 4469, -1999, -1108, 1836, 3923, 6796, -5252, 9863, -5997, -3251, 9596, -3404, -540, 2826, -1737, 3341, -3623, -9885, 2603, -5782, 8174, 2710, 6504, -4128};
    double k = 59;
    long long currentSum = 0;
    for (int i = 0; i < k; i++)
    {
        currentSum += nums[i];
    }
    long long Max = currentSum;
    int l = 0, r = k ;
    int size = nums.size();
    if (k < size)
    {
        while (r < size)
        {

            currentSum -= nums[l];
            if (r + 1 < size)
            {
                currentSum += nums[r + 1];
            }
            l++;
            r++;
            Max = max(Max, currentSum);
        }
    }
    // return (Max*1.0)/(k*1.0);
    cout << (Max * 1.0) / (k * 1.0);
    return 0;
}