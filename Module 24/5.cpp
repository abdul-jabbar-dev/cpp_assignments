#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arry[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arry[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == (n / 2))
            {
                sum += arry[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == (n / 2) && i != j)
            {
                sum += arry[i][j];
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (j < (n / 2))
        {
            sum += arry[0][j];
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (j > (n / 2))
        {
            sum += arry[n - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i > (n / 2))
        {
            sum += arry[i][0];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i < (n / 2))
        {
            sum += arry[i][n - 1];
        }
    }
    cout << sum << endl;
    return 0;
}
