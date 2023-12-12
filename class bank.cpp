#include<iostream>
using namespace std;
class book{
  char name[20];
  char author[20];
  int price;
  public:
  book(){
    cin>>name>>author>>price;
  }
  ~book(){
    cout<<"destructor called";
  }
  void display(){
    cout<<name<<"\n"<<author<<"\n"<<price<<"\n";
  }
};
int main()
{
  book b;
  b.display();
  return 0;
}
