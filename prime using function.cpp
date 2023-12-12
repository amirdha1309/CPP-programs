#include<iostream>
using namespace std;
int isprime(int n);
int main()
{
  int n;
  cout<<"Enter an number"<<endl;
  cin>>n;
  isprime(n);
}
int isprime(int n)
{
  int count,i;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
      count++;
  }
  if(count==2)
  {
    cout<<"It is prime";
  }
  else
  {
    cout<<"It is not";
  }
  return 0;
}
