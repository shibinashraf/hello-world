#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cout<<"ENTER A NUMBER ";
   cin>>x;
   if (x%2 == 0)
   {
   do
   { 
       cout<<x<<"\n";
   x =  x + 2;
   } while (x = 10);
   }
else
{
cout<<"IT IS NOT A EVEN NUMBER ";
}
return 0;

}