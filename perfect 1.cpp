#include<iostream>
using namespace std;
int main()
{
    int i,n,div,sum=0;
    cout<<"Enter an number";
    cin>>n;
    for(i=1;i<n;i++)
    {
    div=n%i;
    if(div==0)
    sum=sum+i;
    }
    if(sum==n)
    {
        cout<<"It is a perfect no";
    }
    else
    {
        cout<<"It is not";
    }
    return 0;
}
