#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ro, cl;
    cin >> ro >> cl;
    int a[ro][cl];
    int frequency[100] = {0};

    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j < cl; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j < cl; j++)
        {
            if (frequency[a[i][j]] > 0)
                a[i][j] = -1;

            else
                frequency[a[i][j]]++;

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
