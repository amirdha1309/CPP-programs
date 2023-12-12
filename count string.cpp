#include<iostream>
#include<string.h>
using namespace std;
int count(char str[50]){
  int count=0,i;
  gets(str);
  for(i=0;i<str[i]!='\0';i++){
    if(str[i]==' ')
      count=count+1;
  }
  cout<<"count:"<<count;
  return 0;
}
int main()
{
  char str[50];
  cin>>str;
  count(str);
}
