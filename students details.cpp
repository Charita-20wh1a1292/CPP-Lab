#include <iostream>
using namespace std;
class student
{
    public:
		char name[50];
   	    int roll;
    	char grades[3];
};
int main() 
{
    int i,n,j;
    student s[10];
    cout << "Enter no of students" << endl;
    cin >> n;
    
    for(i=0;i<n;i++)
    {
		cout << "Enter information of student"<< endl;
    	cout << "Enter name"<<endl;
    	cin >> s[i].name;
    	cout << "Enter roll number"<<endl;
    	cin >> s[i].roll;
    	cout << "Enter grades"<<endl;
    	for(j=0;j<3;j++)
    	{
			cin >> s[i].grades[j];
		}
	}

    cout << "Displaying Information," << endl;
    for(i=0;i<n;i++)
    {
		cout << "NAME : "<<s[i].name<<endl;
		cout << "ROLL NO : "<<s[i].roll<<endl;
		cout << "GRADES"<<endl;
    	for(j=0;j<3;j++)
    	{
			cout <<s[i].grades[j]<<endl;
		}
	}
    return 0;
}
