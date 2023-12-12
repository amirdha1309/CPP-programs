#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter a number:";
	cin>>n;
	while(n !=0)
	{
		int digit=n%10;
		sum=sum+digit;
		n=n/10;
	}
	cout<<"sum of all digits="<<sum<<endl;
	return 0;
}
