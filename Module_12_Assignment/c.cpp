#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int ti = 0; ti < t; ti++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        for (int i = 0; i < n; i++)
        {
            for (int si = 0; si < n; si++)
            {
                if (a[si] > a[si + 1])
                {
                    int temp = a[si];
                    a[si] = a[si + 1];
                    a[si + 1] = temp;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
        int indx;
        for (int j = 1; j < n; j++)
        {
            if (a[j] == a[0])
            {
                indx = j;
            }
            else
                break;
        }
        cout << n - indx + a[indx];
    }

    return 0;
}