#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    ofstream fout("student.txt");
    fout << name;
    fout.close();

    ifstream fin("student.txt");

    string data;
    getline(fin, data);

    cout << "Data read from file: "
         << data << endl;

    fin.close();

    return 0;
}