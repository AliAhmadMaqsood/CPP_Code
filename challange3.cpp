#include <iostream>
#include <string>
using namespace std;

int main() {
    string favoriteTea;
    int cups;

    cout << "Enter your favorite tea: ";
    getline(cin, favoriteTea);

    cout << "How many cups of tea do you want? ";
    cin >> cups;

    cout << "\n----------------------------------" << endl;
    cout << "Yay! " << cups << " cups of " << favoriteTea << " coming right up!" << endl;
    cout << "Chai peelo, mood fresh karo! ?" << endl;
    cout << "----------------------------------" << endl;

    return 0;
}
