#include <iostream> //alphabet triangle

int main() {
  using namespace std;
   int Lines;
   cout<< "ENTER THE NUMBER OF ROWS : ";
  cin>>Lines;
  
  for (int row = 0; row <= Lines; row++) 
  {
    for (int x = 0; x < row; x++) 
    {
      if(x>10)
      {
        cout<<(x +1)<<"\t";
      }
      else
      {
     
      cout << (x +1)<<"\t";
      }
    }
    cout << " \n";
  }

  return 0;
}