#include <iostream>
using namespace std;

class Calculator
{
public:
    float a, b;

    void accept()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void calculate()
    {
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;

        if (b != 0)
        {
            cout << "Division = " << a / b << endl;
            cout << "Modulus = " << (int)a % (int)b << endl;
        }
        else
        {
            cout << "Division and Modulus not possible by zero";
        }
    }
};

int main()
{
    Calculator c;
    c.accept();
    c.calculate();

    return 0;
}