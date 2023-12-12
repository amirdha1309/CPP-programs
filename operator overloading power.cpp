#include<iostream>
using namespace std;
int pow(int x, int n)
{
  int i,pow=1;
  for(i=1;i<=n;i++)
  {
    pow=pow*x;
  }
  return pow;
}
float pow(float x, int n)
{
  int i;
  float pow=1;
  for(i=1;i<=n;i++)
  {
    pow=pow*x;
  }
  return pow;
}
int main()
{
  cout<<pow(2,2)<<endl;
  cout<<pow(2.4f,5);
}
