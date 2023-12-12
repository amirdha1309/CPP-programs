#include<iostream>
using namespace std;
int main()
{
	int n,originalnum,reversednum;
	cout<<"enter a number:";
	cin>>n;
	originalnum=n;
	while(n>0)
	{
		int digit=n%10;
		reversednum=reversednum*10+digit;
		n=n/10;
	}
	if(originalnum=reversednum)
	{
		cout<<originalnum<<" is a palindrome."<<endl;
	}.
		else
		{
			cout<<originalnum<<" is not a palindrome."<<endl;
		}
		return 0;
	}
