#include<iostream>
using namespace std;
int main()
{
  int a[100],fmax,smax,n,i;
  cout<<"Enter the size of array"<<endl;
  cin>>n;
  cout<<"Enter the elements of array"<<endl;
  for(i=0;i<=n;i++)
  {
    cin>>a[i];
  }
  fmax=a[0];
  for(i=0;i<n;i++)
  {
  if(fmax<a[i])
    fmax=a[i];
  }
  smax=a[0];
    if(fmax!=smax)
    {
      for(i=0;i<n;i++)
      {
        if(a[i]!=fmax&&a[i]>smax)
          smax=a[i];
      }
    }
  else
    smax=a[1];
    for(i=0;i<n;i++)
    {
      if(a[i]!=fmax&&a[i]>smax)
        smax=a[i];
    }
  cout<<"The second maximum is"<<smax;
}
