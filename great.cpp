#include<iostream>
using namespace std;
class Greatest
{
    public:
    int a,b;
    void accept()
    {
        cout<<"Enter two numbers:";
        cin>>a>>b;
    }
    void findGreatest()
    {
        if(a>b)
        cout<<"Greatest number="<<a;
    else
    cout<<"Greatest number="<<b;
}
};
int main()
{
    Greatest g;
    g.accept();
    g.findGreatest();
    return 0;

}