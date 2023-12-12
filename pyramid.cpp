#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l;
	cout<<"enter a number:";
	cin>>n;
    for(i=1;i<=n;++i)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(k=i;k<=2*i-1;++k)
		{
			cout<<k;
		}
			for(l=2*i-2;l>=i;--l)
			{
				cout<<l;
			}
			cout<<endl;
		}	
		return 0;
}
