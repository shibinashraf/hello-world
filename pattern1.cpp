#include<iostream>
using namespace std;
int main()
{
int rows;
cout<<"ENTER NUMBER OF ROWS :";
cin>>rows;
for(int i=1; i<=rows; ++i)
  {
      for (int j=1 ; j<= i; ++j)
      {
      cout<<"* ";
  }
  cout<<"\n";

  }

}
