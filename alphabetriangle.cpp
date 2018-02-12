#include <iostream>
using namespace std;
int main()
{
char input, alphabet = 'A';

cout<<"ENTER THE NUMBER OF CHARACTER YOU WANT TO PRINT IN THE LAST ROW :";
cin>>input;
   {
   for(int i =1; i<= (input-'A'+1); ++i)
      for(int j=1; j<= i; ++j)
       {
        cout<<alphabet<<" ";
       }
    ++alphabet;
   }
return 0;
}