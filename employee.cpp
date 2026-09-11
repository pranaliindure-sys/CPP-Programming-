#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:

    // Default constructor
    Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized constructor
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    // Copy constructor
    Employee(const Employee &e)
    {
        id = e.id;
        name = e.name;
        salary = e.salary;
    }

    // Display function
    void display()
    {
        cout << "\nEmployee Details:" << endl;
        cout << "ID = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    int id;
    string name;
    float salary;

    // Taking information from user
    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Employee Salary: ";
    cin >> salary;

    // Parameterized constructor
    Employee e1(id, name, salary);

    e1.display();

    // Copy constructor
    Employee e2(e1);

    cout << "\nCopied Employee:" << endl;
    e2.display();

    return 0;
}