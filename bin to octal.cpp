#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i;
    cout<<"Enter an number";
    cin>>n;
    for(i=0;n>0;i++)
    {
        a[i]=n%8;
        n/=8;
    }
    for(i=i-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
