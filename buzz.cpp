#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an number";
    cin>>n;
    if(n%10==7||n%7==0)
    {
        cout<<"It is a buzz number";
    }
    else
    {
        cout<<"It is not";
    }
    return 0;
}
