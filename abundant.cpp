#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter an number"<<endl;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum>n)
    {
        cout<<"It is abundant";
    }
    else
    {
        cout<<"It is not";
    }
    return 0;
}
