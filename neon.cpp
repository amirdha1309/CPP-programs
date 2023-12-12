#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,square,ld;
    cout<<"Enter an number"<<endl;
    cin>>n;
    square=n*n;
    while(square!=0)
    {
        ld=square%10;
        sum=sum+ld;
        square=square/10;
    }
    if(sum==n)
    {
        cout<<"it is neon";
    }
    else
    {
        cout<<"It is not";
    }
}
 
