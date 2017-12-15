#include<iostream>
using namespace std;
int main()
{
 int x;
 cout<<"ENTER A NUMBER UNDER 20";
 cin>>x;
    // do loop execution
    do {
       cout<<x<< "\n";
       x = x + 1;
    } while( x <= 20 );
  
    return 0;
 }
 