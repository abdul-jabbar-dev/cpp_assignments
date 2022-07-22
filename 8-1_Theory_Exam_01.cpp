#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];

private:
    float total_tax;

public:
    Restaurant(int *food_item_codes, string *food_item_names, int *food_item_prices)
    {
        for (int i = 0; i < 12; i++)
        {
            this->food_item_codes[i] = food_item_codes[i];
            this->food_item_names[i] = food_item_names[i];
            this->food_item_prices[i] = food_item_prices[i];
        }
        this->total_tax = 0;
    };
    void update_tax(float prev_tax)
    {

        this->total_tax += prev_tax;
    };
    float get_total_tax()
    {
        return this->total_tax;
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
    for (int j = 0; j < sizeof(restaurant->food_item_codes) / sizeof(int); j++)
    {
        if (restaurant->food_item_codes[j] == temp)
            return temp;
    };
    cout << temp << " item not found try again: ";
    cin >> temp;
    filter(restaurant, temp);
}
void get_menu(Restaurant *restaurant)
{
    cout << "                   AVAILABLE ITEMS                     " << endl;
    cout << "_______________________________________________________" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "CODE:\t\tNAME:\t\t\t\tPRICE: " << endl;
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

void my_order(int table_no, int number_of_items, int *item_code, int *item_quantity, Restaurant *restaurant)
{
    int sub_total = 0;
    float total_tax = 0;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t BILL SUMMARY" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "Table no. " << number_of_items << endl;
    cout << endl;
    cout << "CODE:\t\tNAME:\t\t\t\tRATE:\tQUANTITY: \tTOTAL: " << endl;
    cout << endl;

    for (int i = 0; i < number_of_items; i++)
    {
        for (int l = 0; l < sizeof(restaurant->food_item_codes) / sizeof(int); l++)
        {
            if (item_code[i] == restaurant->food_item_codes[l])
            {
                sub_total += (item_quantity[i]) * (restaurant->food_item_prices[l]);
                cout << restaurant->food_item_codes[l] << "\t\t" << restaurant->food_item_names[l] << "\t";
                cout << "\t" << restaurant->food_item_prices[l] << "\t" << item_quantity[i] << "\t\t" << (item_quantity[i]) * (restaurant->food_item_prices[l]) << endl;
            }
        }
    }
    float tax_rate = (float)sub_total * 5 / 100;
    cout << endl;
    cout << "                                                                  --------------" << endl;
    cout << "Total                                                             \t" << sub_total << endl;
    cout << "TAX                                                               \t" << tax_rate << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "NET TOTAL\t\t\t\t\t\t\t\t" << sub_total + tax_rate << " Taka" << endl;
    restaurant->update_tax(tax_rate);
    float res_total_tax = restaurant->get_total_tax();
    // cout << res_total_tax; total tax
}

void user_order(Restaurant *restaurant)
{
    int table_no, number_of_items, item_code[number_of_items], item_quantity[number_of_items];
    cout << endl;
    cout << "\t\tWelcome to our restaurant" << endl;
    cout << "\t-----------------------------------------" << endl;
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
        cout << i + 1 << " Item code: ";
        cin >> temp;
        item_code[i] = filter(restaurant, temp);
        cout << i + 1 << " How many you want (Quantity): ";
        cin >> item_quantity[i];
    };
    my_order(table_no, number_of_items, item_code, item_quantity, restaurant);
};
int main()
{
    int n;
    cin >> n;
    Restaurant *restaurant;
    restaurant = create_restaurant(n);
    get_menu(restaurant);
    while (1)
    {
        user_order(restaurant);
    }

    return 0;
}