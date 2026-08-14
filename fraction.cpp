#include<iostream>
using namespace std;
class fraction
{
private:
int numerator,denominator;
public:
fraction(int n=0,int d=1)
{
numerator=n;
denominator=d;
}
fraction add(const fraction &f)
{
return fraction(numerator*f.denominator+f.numerator*denominator,denominator*f.denominator);
}
fraction subtract(const fraction &f)
{
return fraction(numerator*f.denominator-f.numerator*denominator,denominator*f.denominator);
}
void display()const
{
cout<<numerator<<"/"<<denominator<<endl;
}
};
int main()
{
fraction f1(1,2),f2(1,3);
fraction sum =f1.add(f2);
fraction diff=f1.subtract(f2);
cout<<"first fraction number:";f1.display();
cout<<"second fraction number:";f2.display();
cout<<"addition:";sum.display();
cout<<"subtraction:";diff.display();
return 0;
}
