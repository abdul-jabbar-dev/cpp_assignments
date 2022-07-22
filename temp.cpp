#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int food_item_codes[n];
    string food_item_names[n];
    int food_item_prices[n];
    for (int i = 0; i < n; i++)
    {
        cin >> food_item_codes[i];
        getchar();
        getline(cin,food_item_names[i]);
        cin >> food_item_prices[i];

    }
        cout << endl;
        cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << food_item_codes[i] << " ";
        cout << food_item_names[i] << " ";
        cout << food_item_prices[i] << " ";
        cout << endl;
    }

    return 0;
}

