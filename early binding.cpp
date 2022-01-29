// Early Binding
#include<iostream>
using namespace std;
class Base
{
    public:
    void show()
    {
        cout<<"early binding in base class"<<endl;
    }
};
class Derived:public Base
{
    public:
    void show()
    {
        cout<<"in derived class"<<endl;
    }
};
int main()
{
    Base *bptr=new Derived;
    bptr->show();
    return 0;
}
