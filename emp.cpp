#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void getSalary() = 0;
    virtual void displaySalary() = 0;
};

class Developer : public Employee
{
    double salary;

public:
    void getSalary() override
    {
        cout << "Enter Developer Salary: ";
        cin >> salary;
    }

    void displaySalary() override
    {
        cout << "Developer Salary: " << salary << endl;
    }
};

class Manager : public Employee
{
    double salary;

public:
    void getSalary() override
    {
        cout << "Enter Manager Salary: ";
        cin >> salary;
    }

    void displaySalary() override
    {
        cout << "Manager Salary: " << salary << endl;
    }
};

int main()
{
    Developer d;
    Manager m;

    Employee *e;

    e = &d;
    e->getSalary();
    e->displaySalary();

    e = &m;
    e->getSalary();
    e->displaySalary();

    return 0;
}