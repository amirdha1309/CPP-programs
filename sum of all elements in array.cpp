#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,size,sum=0;
	cout<<"enter number of elements:";
	cin>>size; 
	cout<<"enter elements"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"sum of all elements is "<<sum<<endl;
	return 0;
}
