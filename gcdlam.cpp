#include<iostream>
using namespace std;
int main()
{
    int gcd,lcm,n1,n2,num,den,rem;
    cout<<"Enter the values for n1 and n2"<<endl;
    cin>>n1>>n2;
    num=(n1>n2)?n1:n2;
    den=(n1<n2)?n1:n2;
    rem=num%den;
    while(rem!=0)
    {
                 gcd=den; 
                 lcm=n1*n2/gcd;
                 num=den;
                 den=rem;
                 rem=num%den;
                 }
                 cout<<"The gcd of two numbers is"<<gcd;
                 cout<<"The lcm of two numbers is"<<lcm;
                 return 0;
                 }
