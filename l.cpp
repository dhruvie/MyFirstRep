#include<iostream>
using namespace std;
class abc
{
int x;
public:
void setdata()
{
x=2;
}
void operator++(int)
{
x++;
}
void show()
{
cout<<x;
}
};
int main()
{
abc ob;
ob.setdata();
ob++;
ob.show();
}

