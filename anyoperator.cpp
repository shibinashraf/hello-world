#include<iostream> //to do different operations with two numbers
using namespace std;
int main()
{
	char ch;
    int x;
	int y;
	cout<<"ENTER TWO NUMBERS : \n";
	cin>>x>>y;
	do
	{
		cout<<" NUMBER1 = "<<x<<" NUMBER2 = "<<y<<"\n";
		cout<<"\t 1. ADDITION (+)\n";
		cout<<"\t 2. SUBTRACTION (-)\n";
		cout<<"\t 3. MULTIPLICATION(*)\n";
		cout<<"\t 4. DIVISION(/)\n";
		cout<<"\t 5. MODULUS (5) \n";
		cout<<"\t 6. ENTER TO EXIT (E)\n";
		cout<<"\t ENTER THE OPTION NUMBER OR OPERATOR \n";
	cin>>ch;
	switch(ch)
	 {
			case '1' : 
			case '+' :cout<<x+y<<"\n";
			break;
			case '2' : 
			case '-' :cout<<x-y<<"\n ";
			break ;
			case '3' : 
			case '*' :cout<<x*y<<" \n";
			break ;
			case '4' : 
			case '/' :cout<<x/y<<"\n ";
			break ;
			case '5' : 
			case '%' :cout<<x%y<<"\n ";
			break ;
			case '6' : 
			case 'E' :
			case 'e' :cout<<"THANK YOU FOR USING THE PROGRAM\n";
			break;
			default : cout<<"INVALID CHOICE\n";
	 } 
  } while ( ch != 'e' && ch !='E' && ch != '6' );
}
