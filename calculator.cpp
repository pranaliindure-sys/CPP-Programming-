#include <iostream>
using namespace std;

int main() {
    int choice, a, b;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "6. Exit\n";

    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 6)
        return 0;

    if (choice < 1 || choice > 6) {
        cout << "Invalid choice" << endl;
        return 0;
    }

    cout << "Enter two integers: ";
    cin >> a >> b;

    switch (choice) {
        case 1:
            cout << "Result = " << a + b;
            break;
        case 2:
            cout << "Result = " << a - b;
            break;
        case 3:
            cout << "Result = " << a * b;
            break;
        case 4:
            if (b != 0)
                cout << "Result = " << (double)a / b;
            else
                cout << "Cannot divide by zero";
            break;
        case 5:
            if (b != 0)
                cout << "Result = " << a % b;
            else
                cout << "Cannot use modulus by zero";
            break;
    }

    cout << endl;
    return 0;
}