#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    virtual void show()
    {
        cout<<"base"<<endl;
    }
};
class derived1:public virtual base
{
    public:
    int b;
    void show()
    {
        cout<<"derived class 1"<<endl;
    }
};
class derived2:public virtual base
{
    public:
    int c;
    void show()
    {
        cout<<"derived class 2"<<endl;
    }
};
class derived3:public derived1,public derived2
{
    public:
    int d;
    derived3()
    {
        a=1;
        b=2;
        c=3;
        d=4;
    }
    void show()
    {
        cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
        cout<<"sum is "<<a+b+c+d;
    }
};
int main()
{
    base *bptr=new derived1;
    base *ptr=new derived2;
    derived3 d3;
    bptr->show();
    ptr->show();
    d3.show();
    return 0;
}


