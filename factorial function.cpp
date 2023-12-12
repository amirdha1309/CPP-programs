#include<iostream>
using namespace std;
int fact(int n);
int main()
{
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  fact(n);
}
int fact(int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  cout<<"the factorial is "<<fact;
  return 0;
}
