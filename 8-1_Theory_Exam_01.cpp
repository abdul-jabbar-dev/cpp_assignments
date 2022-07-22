#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];

private:
    int total_tax;

public:
    Restaurant(int *food_item_codes, string *food_item_names, int *food_item_prices)
    {
        for (int i = 0; i < 12; i++)
        {
            this->food_item_codes[i] = food_item_codes[i];
            this->food_item_names[i] = food_item_names[i];
            this->food_item_prices[i] = food_item_prices[i];
        }
    };
};

Restaurant *create_retaurant(int n)
{
    int food_item_codes[n];
    string food_item_names[n];
    int food_item_prices[n];
    for (int i = 0; i < n; i++)
    {
        cin >> food_item_codes[i];
        getchar();
        getline(cin, food_item_names[i]);
        cin >> food_item_prices[i];
    }
    Restaurant *restaurant = new Restaurant(food_item_codes, food_item_names, food_item_prices);
    return restaurant;
};

void get_menu(Restaurant *restaurant)
{
    cout << "                        Make bill                      " << endl;
    cout << "_______________________________________________________" << endl;
    cout << "_______________________________________________________" << endl;
    cout << "Code:\t\tName:\t\t\t\tPrice: " << endl;
    cout << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << restaurant->food_item_codes[i] << "\t"
             << "\t";
        cout << restaurant->food_item_names[i] << "\t"
             << "\t";
        cout << restaurant->food_item_prices[i] << "\t"
             << "\t";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    Restaurant *restaurant;
    restaurant = create_retaurant(n);
    get_menu(restaurant);
   // user_order(restaurant); working 

    return 0;
}