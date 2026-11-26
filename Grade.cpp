#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the Score: ";
    cin >> score;

    if (score > 100 || score < 0) {
        cout << "Invalid Marks" << endl;
    }
    else if (score >= 80) {
        cout << "Grade A" << endl;
    }
    else if (score >= 60) {
        cout << "Grade B" << endl;
    }
    else if (score >= 40) {
        cout << "Grade C" << endl;
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;
}
