//smart no or not (problem 1)
#include<iostream>
using namespace std;
int main()
{
	int N,i,sum=0;
	cout<<"enter a number"<<endl;
	cin>>N;
	for(i=1;i<N;i++)
	{
		if(N%i==0)
		{
			sum = sum + i;
		}
	}
	//cout<<"sum of divisors = "<<sum<<endl;
	if(sum>N)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
	return 0;
	
}
