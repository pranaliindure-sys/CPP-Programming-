#include <iostream>
using namespace std;

int main() {
    int num, temp, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (num != 0) {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (sum == temp)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}