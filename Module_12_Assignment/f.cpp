#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b&&b == c)
    {
        cout << 1;
    }
    else if (a == b && b != c)
    {
        cout << 2;
    }
    else if (a == c && b != a)
    {
        cout << 2;
    }
    else if (b == c && a != c)
    {
        cout << 2;
    }
    else if (a != b != c)
    {

        cout << 3;
    }

    return 0;
}