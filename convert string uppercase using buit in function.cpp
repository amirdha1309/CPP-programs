#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char str[] = "John is from USA.";
  char ch;

  cout << "The uppercase version of \"" << str << "\" is " << endl;

  for (int i = 0; i < strlen(str); i++) 
  {
    ch = toupper(str[i]);

    cout << ch;
  }

  return 0;
}
