#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int ti = 0; ti < t; ti++)
    {
        int d;
        cin >> d;
        int days[d];
        for (int i = 0; i < d; i++)
        {
            cin >> days[i];
        }
        int expenend[d];
        for (int i = 0; i < d; i++)
        {
            cin >> expenend[i];
        }
        int que;
        cin >> que;
        int que_days[que];
        for (int i = 0; i < que; i++)
        {
            cin >> que_days[i];
        }
        cout << endl;
        int amo = 0, ol = 0;
        for (int i = 0; i < d; i++)
        {
            int ex = (ex + days[i]) - expenend[i];
            amo = ex;
            if (i == que_days[ol])
            {
                if (ex > 0)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
                ol++;
            }
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}