#include<iostream>
using namespace std;
double area(int);
int main()
{
  int r;
  cout<<"enter the radius"<<endl;
  cin>>r;
  area(r);
}
double area(int r)
{
  double pi=3.14;
  double area=pi*r*r;
  cout<<"The area of circle is "<<area;
  return 0;
}
