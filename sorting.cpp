#include<iostream>
using namespace std;
int sort(int arr[5]){
  int i,j,temp;
  for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
      if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  for(i=0;i<5;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
double sort(double arr[5]){
  int i,j;
  double temp;
  for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
      if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  cout<<"\n";
  for(i=0;i<5;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
int main()
{
  int arr[5]={2,1,4,5,3};
  double arr2[5]={1.5,3,1.6,4,3.5};
  sort(arr);
  sort(arr2);
}
