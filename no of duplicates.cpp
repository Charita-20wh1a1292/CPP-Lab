#include<iostream>
using namespace std;
int main()
{
	int arr[20],n,i,j,count=0;
	cout<<"enter array length"<<endl;
	cin>>n;
	cout<<"enter array elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
			break;
		}
		
	}
	cout<<"no of duplicate elements are "<<count;
	return 0;
}
