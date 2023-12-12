#include<iostream>
using namespace std;
class rec{
  int l;
  int b;
  int area;
  public:
  rec(){
    cin>>l;
    cin>>b;
    area=l*b;
  }
  ~rec(){
    cout<<"destructor called";
  }
  void display(){
    cout<<"len: "<<l;
    cout<<"\nb: "<<b;
    cout<<"\narea: "<<area<<"\n";
  }
};
int main(){
  rec r;
  r.display();
  return 0;
}
