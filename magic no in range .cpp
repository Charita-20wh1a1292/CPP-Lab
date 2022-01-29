#include<iostream>
using namespace std;
int main()
{
    int range1,range2,i;
    cout<<"Enter a range:";
    cin>>range1;
    cin>>range2;
    cout<<"Magic numbers between "<<range1<<" and "<<range2<<" are: ";
    for(i=range1;i<=range2;i++)
    {
    int num3=i;
    int num1=i;
    int sum=0,rem;

    //Sum of digit
    while(num1!=0)
    {
        rem=num1%10;
        sum+=rem;
        num1/=10;
    }
     //Reverse of sum
    int rev=0,num2=sum,rem2;

    while(num2!=0)
    {
        rem2=num2%10;
        rev=rev*10+rem2;
        num2/=10;
    }
   if(sum*rev==num3)
    cout<<i<<" ";
}
}

