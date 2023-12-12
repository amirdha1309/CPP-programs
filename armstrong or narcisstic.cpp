#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0,temp;
    cout<<"Enter an number"<<endl;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev+(r*r*r);
        n/=10;
    }
   if(rev=temp)
   {
       cout<<"The number is narcisstic or armstrong";
   }
    else
    {
        cout<<"It is not";
    }
    return 0;
}
