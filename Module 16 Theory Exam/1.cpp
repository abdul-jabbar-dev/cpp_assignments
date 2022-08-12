#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {7,
                 2,
                 13,
                 2,
                 11,
                 4};
    int n = sizeof(arr) / 4;
    for (int p = 1; p < n; p++)
    {
        cout << "Iteration " << p << endl;
        for (int i = 1; i < n; i++)
        {

            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
            }
            cout<<"Step "<<i<<" : ";
            for (int j = 0; j < n; j++)
            {
                cout << arr[j] << " ";
            }

            cout << endl;
        }
    }
}