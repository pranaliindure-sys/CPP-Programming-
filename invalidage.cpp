#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid age";
    }
};

class Person {
public:
    int age;

    void inputAge() {
        cout << "Enter age: ";
        cin >> age;
    }

    void validateAge() {
        if (age < 0 || age > 120) {
            throw InvalidAgeException();
        }

        cout << "Age is valid" << endl;
    }
};

int main() {
    Person p;
    p.inputAge();

    try {
        p.validateAge();
    }
    catch (const InvalidAgeException& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}