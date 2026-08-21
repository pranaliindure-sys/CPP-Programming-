#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    void accept()
    {
        cout << "Enter hours, minutes and seconds: ";
        cin >> h >> m >> s;
    }

    Time add(Time t)
    {
        Time r;

        r.s = s + t.s;
        r.m = m + t.m + r.s / 60;
        r.s = r.s % 60;

        r.h = h + t.h + r.m / 60;
        r.m = r.m % 60;

        return r;
    }

    void display()
    {
        cout << "Resultant Time = ";

        if(h < 10) cout << "0";
        cout << h << ":";

        if(m < 10) cout << "0";
        cout << m << ":";

        if(s < 10) cout << "0";
        cout << s << endl;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.accept();

    cout << "Enter second time:\n";
    t2.accept();

    t3 = t1.add(t2);

    t3.display();

    return 0;
}