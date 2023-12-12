#include<iostream>
using namespace std;
int intarr(int arr[5]){
  int i;
  for(i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
double doublearr(double arr[5]){
  int i;
  cout<<"\n";
  for(i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
char chararr(char arr[5]){
  int i;
  cout<<"\n";
  for(i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
int main(){
  int arr[5]={1,2,3,4,5};
  double arr2[5]={1,1.5,2,2.5,2};
  char arr3[5]={'h','a','p','p','y'};
  intarr(arr);
  doublearr(arr2);
  chararr(arr3);
}
