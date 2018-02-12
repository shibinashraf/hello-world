#include<iostream> //
using namespace std;
int main()
{
	int i;
	for(i=1; i<=100; ++i)
	{
		if (i== 5)
		continue;
		cout<<i<<"\t";
	}
}
