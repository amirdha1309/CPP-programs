#include<iostream>
#include<string.h>
using namespace std;
int rev(char str[10]){
  cout<<"reverse string: "<<strrev(str);
  return 0;
}
int main()
{
  char str[50];
  cin>>str;
  rev(str);
}
