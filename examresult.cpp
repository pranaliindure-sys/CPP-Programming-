#include <iostream>
using namespace std;

class Result
{
public:
    float marks[5];
    float total,percentage;

    void accept()
    {
        cout << "Enter marks of 5 subjects:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = total / 5;

        cout << "\nTotal Marks = " << total;
        cout << "\nPercentage = " << percentage << "%";

        if (percentage >= 40)
            cout << "\nResult = Passed";
        else
            cout << "\nResult = Failed";
    }
};

int main()
{
    Result r;
    r.accept();
    r.calculate();

    return 0;
}