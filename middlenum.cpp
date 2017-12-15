#include <iostream>
using namespace std;
int main()
{
	int numone=0;
	int numtwo=0;
	int numthree=0;
	cout<<"enter three numbers\n ";
	cin>>numone>>numtwo>>numthree;
	
	if(numone < numtwo && numthree > numone)
{
	cout<<"yes\n";
}
	else
{
	cout<<"no\n";
}
return 0;
}	
	
