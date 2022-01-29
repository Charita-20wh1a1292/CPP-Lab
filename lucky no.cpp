//lucky no using date of birth
#include<iostream>
using namespace std;
int main()
{
	long int DOB;
	int sum1=0,sum3=0,temp,rem,sum2=0;
	cout<<"enter date of birth(DDMMYYYY)"<<endl;
	cin>>DOB;
	temp= DOB;
	while(DOB!=0)
	{
		rem=DOB%10;
		DOB=DOB/10;
		sum1=sum1+rem;		
	}
	temp= sum1;
	if(sum1>9)
	{
		while(sum1!=0)
		{
			rem = sum1%10;
			sum1=sum1/10;
		    sum2=sum2+rem;  
		}
		temp= sum2;
		if(sum2>9)
		{
			while(sum2!=0)
			{
				rem = sum2%10;
				sum2=sum2/10;
		    	sum3=sum3+rem;
			}
		cout<<"lucky no is "<<sum3;
		}
		else
		cout<<"lucky no is "<<sum2<<endl;		
	}
	else
	cout<<"lucky no is "<<sum1<<endl;	
	return 0;
}
