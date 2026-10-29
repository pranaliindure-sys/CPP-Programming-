#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    void getRoll() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class StudentExam : public Student {
public:
    int marks;
    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class StudentResult : public StudentExam {
public:
    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

class LibraryItem {
public:
    void showItem() {
        cout << "This is a library item." << endl;
    }
};

class Book : public LibraryItem {};
class Magazine : public LibraryItem {};

int main() {
    StudentResult s;
    s.getRoll();
    s.getMarks();
    s.display();

    Book b;
    Magazine m;
    b.showItem();
    m.showItem();

    return 0;
}