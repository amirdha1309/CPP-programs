#include<iostream>
using namespace std;
int main()
{
    int i,n,j=0;
    cout<<"enter a number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		j++;
		}
	}
	if(j==2)
	cout<<"\n"<<n<<" is a prime number.\n";
	else
	cout<<"\n"<<n<<" is not a prime number.\n";
	return 0;
	}
