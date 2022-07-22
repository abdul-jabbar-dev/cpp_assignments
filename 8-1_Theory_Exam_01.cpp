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

Restaurant *create_restaurant(int n)
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
int filter(Restaurant *restaurant, int temp)
{
    for (int j = 0; j < sizeof(restaurant->food_item_codes) / sizeof(restaurant->food_item_codes[0]); j++)
    {
        if (restaurant->food_item_codes[j] == temp)
            return temp;
    };
    cout << temp << " Incorrect item code try again: ";
    cin >> temp;
    filter(restaurant, temp);
}
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
void user_order(Restaurant *restaurant)
{
    int table_no, number_of_items, item_code[number_of_items], item_quantity[number_of_items];
    cout << "Welcome to our restaurant" << endl;
    cout << endl;
    cout << "Table Number: ";
    cin >> table_no;
    cout << endl;
    cout << "How many order you want: ";
    cin >> number_of_items;
    cout << endl;

    for (int i = 0; i < number_of_items; i++)
    {
        int temp;
        cout << i << " Item code: ";
        cin >> temp;
        item_code[i] = filter(restaurant, temp);
        cout << i << " How many you want (Quantity): ";
        cin >> item_quantity[i];
    };
    for (int i = 0; i < number_of_items; i++)
    {
        cout << i << " your Item code: " << item_code[i] << " ";
        cout << " your Item qua: " << item_quantity[i] << endl;
    };

};
int main()
{
    int n;
    cin >> n;
    Restaurant *restaurant;
    restaurant = create_restaurant(n);
    get_menu(restaurant);
    user_order(restaurant);

    return 0;
}