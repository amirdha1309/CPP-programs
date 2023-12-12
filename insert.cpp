#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i;
    cout<<"Enter an number"<<endl;
    cin>>n;
    for(i=0;n>0;i++)
    {
                    a[i]=n%2;
                    n=n/2;
                    }
                    cout<<"The binary of the number is"<<endl;
                    for(i=i-1;i>=0;i--)
                    {
                                       cout<<a[i];
                                       }
                                       return 0;
                                       }
                    
                    
