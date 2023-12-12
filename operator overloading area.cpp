#include<iostream>
using namespace std;
int area(int a)
{
  int area=a*a;
  cout<<"Area of square is "<<area<<"squnits"<<endl;
  return 0;
}
int area( int l, int b)
{
  int area=l*b;
  cout<<"Area of rectangle is "<<area<<"squnits"<<endl;
  return 0;
}
float area(float r){
  float area=3.14*r*r;
  cout<<"Area of circle is "<<area<<"squnits";
  return 0;
}
int main()
{
  area(5);
  area(7,9);
  area(6.8f);
}
