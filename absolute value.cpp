#include<iostream>
using namespace std;
int absolute(int var)
{
  if(var<0)
    var= -var;
  return var;
}
float absolute(float var)
{
  if(var<0.0)
    var= -var;
  return var;
}
int main()
{
  cout<<absolute(-5)<<endl;
  cout<<absolute(6.5f);
}
