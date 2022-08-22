#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int newArry[n][m] = {0};
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            for (int o = i; o >= 0; o--)
            {
                for (int p = m; p >= 0; p--)
                {
                    // if (arr[i][j] == newArry[o][p])
                    // {
                    //     newArry[i][j] = -1;
                    // }
                    // else
                    // {
                    //     newArry[i][j] = arr[i][j];
                    // }
                }
            }
        }
        cout << endl;
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << newArry[i][j] << " ";
    //     }
    // cout << endl;
    // }
    // cout << endl;
}