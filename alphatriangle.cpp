#include <iostream>

int main() {
  using namespace std;
  // change this to required number of lines
  const int Lines = 52;
  
  for (int row = 0; row < Lines; row++) {
    for (int x = 0; x < row; x++) {
      cout << (char)(x % 26 +'A');
    } 
    cout << " \n";
  }

  return 0;
}