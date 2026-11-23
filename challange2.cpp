#include <iostream>
using namespace std;

int main() {
    double base_price;

    cout << "Enter base price of tea: ";
    cin >> base_price;

    // Increase price by 10%
    double increased_price = base_price * 1.10;

    // Explicit casting to int to get rounded price
    int new_price = (int)(increased_price + 0.5);

    cout << "Base Price: " << base_price << endl;
    cout << "New Price after 10% increase: " << new_price << endl;

    return 0;
}
