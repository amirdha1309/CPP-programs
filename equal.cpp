#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter the first number:";
	cin>>n1;
	cout<<"enter the second number:";
	cin>>n2;
	if(n1<n2)
	{
		cout<<"n1 is less than n2";
	}
	else if(n1>n2)
	{
		cout<<"n1 is greater than n2";
	}
	else
	{
		cout<<"n1 is equal to n2";
	}
	return 0;
}
