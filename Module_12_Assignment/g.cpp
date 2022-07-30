#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, f, c, e, o;
    cin >> n;
    e = n % 10;
    c = n % 100 / 10;
    f = n % 1000 / 100;
    o = (e * 100) + (c * 10) + f;
    if (o == n)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}