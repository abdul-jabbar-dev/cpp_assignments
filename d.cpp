#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sn;
    cin >> sn;
    for (int si = 0; si < sn; si++)
    {
        int n;
        cin >> n;
        int arry[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arry[i];
        }
        int mach = 0;
        int value = 0;
        for (int i = 0; i < n; i++)
        {
            for (int l = 0; l < i; l++)
            {
                if (arry[i] == arry[i + 1] && value <= arry[l])
                {
                    value = arry[i];
                    mach++;
                }
            }
        }
        cout << mach << " " << value<<endl;
    }

    return 0;
}