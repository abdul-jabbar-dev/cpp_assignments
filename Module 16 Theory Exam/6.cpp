#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row, col;
    cin >> row >> col;
    int arr[row][col];
    arr[6][13] = 15;
    int *base = &arr[0][0];
    cout<<base+4*(col*6+13);
}