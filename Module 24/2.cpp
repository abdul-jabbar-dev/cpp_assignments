#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int isEle[m];
    for (int i = 0; i < m; i++)
    {
        cin >> isEle[i];
    }
    // 7 8 1 5 2 6 4 3
    // 1 3 6 0 9 2

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (arr[i] == isEle[j])
            {

                n--;
                for (int p = i; p < n; p++)
                {
                    arr[p] = arr[p + 1];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}