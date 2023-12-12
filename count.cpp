#include <iostream>
#include <sstream>

using namespace std;
int wc( string s ) {
   int count=1,i;
   int n = s.length();
   for (i = 0; s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
   
   return (count);
}



int main()
{
    char str[50]; 
    cout << "Enter a string : ";
    gets(str);
    cout << "word count =" << wc(str) << endl;
   
}
