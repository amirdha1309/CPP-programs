#include <iostream>
using namespace std;

int main()
{
	int a,b,c,big;
	cin>>a>>b>>c;
	(a>b&&a>c)?big=a:b>a?big=b:big=c;
	cout<<big;
	return 0;
}
