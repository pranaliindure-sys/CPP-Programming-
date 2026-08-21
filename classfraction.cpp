#include <iostream>
using namespace std;

class Fraction
{
    int num, den;

public:
    void accept()
    {
        cout << "Enter numerator and denominator: ";
        cin >> num >> den;
    }

    Fraction add(Fraction f)
    {
        Fraction r;
        r.num = num * f.den + f.num * den;
        r.den = den * f.den;
        return r;
    }

    Fraction subtract(Fraction f)
    {
        Fraction r;
        r.num = num * f.den - f.num * den;
        r.den = den * f.den;
        return r;
    }

    void display()
    {
        int a = num, b = den, t;

        while(b != 0)
        {
            t = a % b;
            a = b;
            b = t;
        }

        num = num / a;
        den = den / a;

        cout << num << "/" << den << endl;
    }
};

int main()
{
    Fraction f1, f2, sum, sub;

    cout << "Enter first fraction:\n";
    f1.accept();

    cout << "Enter second fraction:\n";
    f2.accept();

    sum = f1.add(f2);
    sub = f1.subtract(f2);

    cout << "Addition = ";
    sum.display();

    cout << "Subtraction = ";
    sub.display();

    return 0;
}