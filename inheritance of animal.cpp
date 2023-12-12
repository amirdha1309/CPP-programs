#include<iostream>
using namespace std;
class animal
{
 private:
   char name[50];
   char species[50];
   int age;
  public:
   void read_a();
   void disp_a();
};
void animal::read_a()
{
  cout<<"Name "<<endl;
  cin>>name;
  cout<<"Species "<<endl;
  cin>>species;
  cout<<"Age "<<endl;
  cin>>age;
}
void animal::disp_a()
{
  cout<<"Name:"<<name<<endl;
  cout<<"Species:"<<species<<endl;
  cout<<"Age:"<<age<<endl;
}
class cat : private animal
{
char colour[100];
char breed[100];
public:
 void read_s();
 void disp_s();
};
void cat::read_s()
{
  read_a();
  cout<<"Colour"<<endl;
  cin>>colour;
  cout<<"Breed"<<endl;
  cin>>breed;
}
void cat::disp_s()
{
  disp_a();
  cout<<"Colour:"<<colour<<endl;
  cout<<"Breed:"<<breed<<endl;
}
class dog : private animal
{
 int weight;
 char breed[100];
 public:
 void read_s();
 void disp_s();
};
void dog::read_s()
{
  read_a();
  cout<<"Weight"<<endl;
  cin>>weight;
  cout<<"Breed"<<endl;
  cin>>breed;
}
void dog::disp_s()
{
  disp_a();
  cout<<"Weight:"<<weight<<endl;
  cout<<"Breed:"<<breed<<endl;
}
int main()
{
  cat s;
  dog s1;
  s.read_s();
  s.disp_s();
  s1.read_s();
  s1.disp_s();
  return 0;
}
