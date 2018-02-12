/*To count different types of characters in the given string */
#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
char text[80];
int ucase=0, lcase=0, digit=0, i;
cout<<"Enter a  line of text: ";
gets(text);
for(i=0 ;text[i] != '\0';i++ )
if(isupper(text[i])) ucase++;
else if(islower(text[i])) lcase++;
else if(isdigit(text[i])) digit++; 
cout<<"\nNo. of Uppercase letters = "<<ucase;
cout<<"\nNo. of Lowercase letters = "<<lcase;
cout<<"\nNo. of Digits = "<<digit;
cout<<"\nThe string in Uppercase form is \n";
i=0;
while(text[i]!='\0')
{
    putchar(toupper(text[i]));
    i++;
}
cout<<"\nThe string in Lowercase form is\n";
i=0;
do
{
    putchar(tolower(text[i]));
    i++;
    }while(text[i] !='\0' );
    return 0;
}