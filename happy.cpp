#include<iostream>
using namespace std;
int main()
{
    int n,temp,sum=0;
    cout<<"Enter an number";
    cin>>n;
    while(sum!=1&&sum!=4)
    sum=0;
    while(n!=0)
    {
        temp=n%10;
        sum=sum+(temp*temp);
        n=n/10;
    }
    sum=n;
    if(sum==1)
    {
        cout<<"it is happy";
    }
    else
    {
        cout<<"It is not";
    }
    return 0;
}
