#include<iostream>
using namespace std;
double fah (double);
int main()
{
  double cel;
  cout<<"enter the temperature in celcius:\n";
  cin>>cel;
  fah(cel);
}
double fah(double cel)
{
  double fah=(cel*9.0/5.0)+32.0;
  cout<<"fah="<<fah;
  return 0;
}
