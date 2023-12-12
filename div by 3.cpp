#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	if(n%3==0)
	{
		cout<<n<<" is divisible by 3."<<endl;
	}
	else
	{
		cout<<n<<" is not divsible by 3."<<endl;
	}
	return 0;
}
