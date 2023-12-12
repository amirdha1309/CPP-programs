#include<iostream>
using namespace std;
class car{
  char name[20];
  int num;
  int amount;
  public:
  car(){
    cin>>name;
    cin>>num;
    cin>>amount;
  }
  ~car(){
    cout<<"destructor called";
  }
  void display(){
    cout<<name<<"\n";
    cout<<num<<"\n";
    cout<<amount<<"\n";
  }
};
int main(){
  car c;
  c.display();
  return 0;
}
