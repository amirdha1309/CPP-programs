#include<iostream>
using namespace std;
int minmax(int n);
  int main()
{
  int i,n,a[100];
  cout<<"Enter the size of the array"<<endl;
  cin>>n;
  cout<<"Enter the elements of array"<<endl;
  for(i=0;i<=n;i++)
  {
    cin>>a[i];
  }
  minmax(n);
}
int minmax(int n)
{
  int min,max,i,a[100];
  min=max=a[0];
  for(i=0;i<=n;i++)
  {
    if(a[i]>max)
      max=a[i];
    if(a[i]<min)
      min=a[i];
  }
  cout<<"The maximum is"<<max<<endl;
  cout<<"The minimum is "<<min<<endl;
  return 0;
}
