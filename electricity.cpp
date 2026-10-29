#include <iostream>
using namespace std;

int main() {
    string name;
    int units;
    double bill = 0;

    cout << "Enter consumer name: ";
    getline(cin, name);

    cout << "Enter units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid units" << endl;
        return 0;
    }

    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else if (units <= 300)
        bill = 100 * 5 + 100 * 7
             + (units - 200) * 10;
    else
        bill = 100 * 5 + 100 * 7
             + 100 * 10 + (units - 300) * 12;

    cout << "Consumer: " << name << endl;
    cout << "Electricity bill = Rs. " << bill << endl;

    return 0;
}