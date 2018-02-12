#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20] , s2[20] , s3[20];
    cout<<"Enter two strings: ";
    cin>>s1>>s2;
    int n =strcmp(s1,s2);
if(n==0)
cout<<"\nThe input strings are  same.";
else
{
    cout<<"\nThe input strings are not same ";
    strcpy(s3 , s1);
    strcat(s3 , s2);
    cout<<"\nString after concatenation is: "<<s3;
    cout<<"\nLength of the new string is: "<<strlen(s3);
}
return 0;
}