#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()
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
    Base*bp=new Derived;
    bp->show();
    return 0;
}
