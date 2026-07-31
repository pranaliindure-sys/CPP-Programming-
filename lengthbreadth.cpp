#include <iostream>
using namespace std;
int main()
{
  int l, b, area, perimeter;
  cout << "Enter length and breadth: ";
  cin >> l >> b;
  area = l * b;
  perimeter = 2 * (l + b);
  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter;
  return 0;
  }
