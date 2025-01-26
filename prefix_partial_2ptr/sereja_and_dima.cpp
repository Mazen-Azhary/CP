    #include <stdlib.h>
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define Mazen                     \
        ios_base::sync_with_stdio(0); \
        cin.tie(0);                   \
        cout.tie(0);
    int main()
    {
        Mazen int n;
        cin >> n;
        ll arr[n];
        ll s=0, d=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int i = 0, j = n - 1;
        bool turn = 1; // 1 sereja , 0 dima
        while (i <= j)
        {
            if (turn)
            {
                if (arr[i] > arr[j])
                {
                    s += arr[i];
                    i++;
                }
                else
                {
                    s += arr[j];
                    j--;
                }
            }
            else
            {
                if (arr[i] > arr[j])
                {
                    d += arr[i];
                    i++;
                }
                else
                {
                    d += arr[j];
                    j--;
                }
            }

            turn = !turn;
        }


        cout << s << " " << d;

        return 0;
    }
