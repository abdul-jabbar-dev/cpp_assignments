#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n, subString;
    cin >> n;
    int flag = 0;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == 'A' && flag == 0)
        {
            subString.push_back(n[i]);
            flag = 1;
        }
        else if (flag > 0)
        {
            subString.push_back(n[i]);
            flag++;
        }
    }

    for (int i = subString.size() - 1; i > 0; i--)
    {
        if (subString[i] == 'Z')
            break;
        else
            subString.erase(subString.length() - 1);
    }

    cout << subString.length();
    return 0;
}