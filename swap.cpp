#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int a,b;
	cout<<"enter the values of a and b:";
	cin>>a>>b;
	cout<<"after swapping:";
	swap(a,b);
	return 0;
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<" "<<x<<" "<<y<<endl;
	}
