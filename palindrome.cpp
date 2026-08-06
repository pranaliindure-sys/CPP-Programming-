#include <iostream>
using namespace std;

int main() {
    int num, temp, rem, rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (temp == rev)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}