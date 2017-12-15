#include <iostream>
using namespace std;
int main()
{
	char ch;

	cout<<"enter a alphabet :\n";
	cin>>ch;
	char LC; //lower case
	char UC; //upper case
	LC = (ch == 'a' || ch ==  'e' || ch == 'i' || ch == 'o'  || ch == 'u');
	UC = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'O');
	if (LC || UC)
	cout<<"\tIT IS A VOWEL\n";
	else
		cout<<"\tIT IS NOT A VOWEL\n";
return 0;

}

