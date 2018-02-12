#include<iostream> 
using namespace std;
int main()
{
	int x;
	int y=2;
	cin>>x;
	if(x%2 ==0)
	{
		while(x<=100)
		{
		cout<<x<<"\n";
		x=y+x;
		
		}
	}
	else
	{
		cout<<"IT IS NOT A EVEN NUMBER!! \n";
	
    }
}
