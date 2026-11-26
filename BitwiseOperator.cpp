#include <iostream>
using namespace std;

int main() {
    // Stock encoded: 1 = Green, 2 = Black, 4 = Oolong
    // Example: 5 means Green (1) + Oolong (4) are in stock
    int stock = 5;
    int tea_type;

    cout << "1 = Green Tea" << endl;
    cout << "2 = Black Tea" << endl;
    cout << "4 = Oolong Tea" << endl;

    cout << "Enter tea type (1, 2 or 4): ";
    cin >> tea_type;

    // Bitwise AND se check karna
    if (stock & tea_type) {
        cout << "This tea is IN STOCK" << endl;
    } else {
        cout << "This tea is OUT OF STOCK" << endl;
    }

    return 0;
}
