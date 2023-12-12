#include<iostream>
using namespace std;
int main()
{
	int arr1[50],arr2[50],arrm[100];
	int size1,size2,i,k;
	cout<<"enter size of first array"<<endl;
	cin>>size1;
	cout<<"enter arr1 elements"<<endl;
	for(i=0;i<size1;i++)
	{
		cin>>arr1[i];
		arrm[i]=arr1[i];
	}
	k=i;;
	cout<<"enter size of arr2";
	cin>>size2;
	cout<<"enter arr2 elements";
	for(i=0;i<size2;i++)
	{
		cin>>arr2[i];
		arrm[k]=arr2[i];
		k++;
	}
	cout<<"the merged arrays is ";
	for(i=0;i<k;i++)
	cout<<arrm[i]<<" ";
	cout<<endl;
	return 0;
}
