#include <iostream>
using namespace std;

class Box
{
    float length, width, height;

public:

    // Default Constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized Constructor
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Copy Constructor
    Box(const Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    // Calculate Volume
    float volume()
    {
        return length * width * height;
    }

    // Display
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << volume() << endl;
    }

    // Destructor
    ~Box()
    {
        cout << "Destructor called. Object destroyed." << endl;
    }
};

int main()
{
    float l, w, h;

    // Default Constructor
    Box b1;

    cout << "Box 1 (Default Constructor):" << endl;
    b1.display();

    // Taking input from user
    cout << "\nEnter Length: ";
    cin >> l;

    cout << "Enter Width: ";
    cin >> w;

    cout << "Enter Height: ";
    cin >> h;

    // Parameterized Constructor
    Box b2(l, w, h);

    cout << "\nBox 2 (Parameterized Constructor):" << endl;
    b2.display();

    // Copy Constructor
    Box b3(b2);

    cout << "\nBox 3 (Copy Constructor):" << endl;
    b3.display();

    return 0;
}