#include<iostream>
using namespace std;
class time
{
private?:
int hour, min,sec;
public:
time(int h=0,int m=0 int s=0}
{
hour=h;
min=m;
sec=s;
}
time add(const time &t)
{
int s=sec+t.sec;
int m=min+t.min+s/60;
int h=hour+t.hour+m/60;
s=s%60;
m=m%60;
return time(h,m,s);
}
time subtract(const time &t)
{
int total1=hour*3600+min*60+sec;
int total2=t.hour*3600+t.min*60+t.sec;
int diff=total1-total2;
int h=diff/3600;
diff=diff%3600
int m=diff/60;
int s=diff%60;
return time(h,m,s);
}
void display()const
{
cout<<hour<<":"<<min<<":"<<sec<<endl;
}
};
int main()
{
time t1(5,40,30);
time t2(2,30,45);
Time sum=t1.add(t2);
Time diff=t1.subtract(t2);
cout<<"first time:";
t1.display();
cout<<"second time:";
t2.display();
cout<<"addition:";
sum.display();
cout<<"subtraction:";
diff.display();
return 0;
}


















