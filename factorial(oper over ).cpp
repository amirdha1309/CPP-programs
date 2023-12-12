#include<iostream>
using namespace std;
int fact(int n)
{
  int i, fact=1;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  return fact;
}
float fact(float n)
{
  float f=1;
  int i;
  for(i=1;i<=n;i++){
    f=f*i;
  }
  return f;
}
int main()
{
  cout<<fact(4)<<endl;
  cout<<fact(4.5f);
}
