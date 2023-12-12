#include<iostream>
using namespace std;
int main()
{
    int i,n,rem,fact=1,sum=0,temp;
    cout<<"Enter an number";
    cin>>n;
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n/=10;
    }
    if(sum==temp)
    {
        cout<<"It is strong";
    }
    else
    {
        cout<<"It is not";
    }
}
