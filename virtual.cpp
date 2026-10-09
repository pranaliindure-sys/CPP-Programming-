#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Shape
{
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double calculateArea() const override
    {
        return PI * radius * radius;
    }

    double calculatePerimeter() const override
    {
        return 2 * PI * radius;
    }
};

class Rectangle : public Shape
{
    double length, width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double calculateArea() const override
    {
        return length * width;
    }

    double calculatePerimeter() const override
    {
        return 2 * (length + width);
    }
};

class Triangle : public Shape
{
    double a, b, c;

public:
    Triangle(double x, double y, double z)
    {
        a = x;
        b = y;
        c = z;
    }

    double calculateArea() const override
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double calculatePerimeter() const override
    {
        return a + b + c;
    }
};

int main()
{
    double r, l, w, a, b, c;

    cout << "Enter radius: ";
    cin >> r;

    Circle circle(r);

    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Circle Perimeter: " << circle.calculatePerimeter() << endl;

    cout << "\nEnter length and width: ";
    cin >> l >> w;

    Rectangle rectangle(l, w);

    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << endl;

    cout << "\nEnter three sides of triangle: ";
    cin >> a >> b >> c;

    Triangle triangle(a, b, c);

    cout << "Triangle Area: " << triangle.calculateArea() << endl;
    cout << "Triangle Perimeter: " << triangle.calculatePerimeter() << endl;

    return 0;
}