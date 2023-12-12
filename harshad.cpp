#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0;
    cout<<"Enter an number";
    cin>>n;
    while(n!=0)
    {
        m=n%10;
        sum=sum+sum;
        n/=10;
    }
    if(n%sum==0)
    {
        cout<<"It is harshad";
    }
    else
    {
        cout<<"It is not";
    }
    return 0;
}
