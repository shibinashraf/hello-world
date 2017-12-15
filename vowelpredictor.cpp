#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\tENTER THE ALPHABET :\n";
	cin>>ch;
	switch(ch)
	{
		case 'A' :
		case 'a' :
		case 'E' :
		case 'e' :
		case 'I' :
		case 'i' :
		case 'O' :
		case 'o' :
		case 'U' :
		case 'u' :cout<<"\tTHE GIVEN CHARACTER IS A VOWEL\n";
		          break;
		default  : cout<<"\tTHE GIVEN CHARACTER IS NOT A VOWEL\n";
	} 
}

