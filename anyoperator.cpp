#include <iostream>
using namespace std;
int main()
{
	char ch;
	float n1, n2;
	cout<<"\tENTER TWO NUMBERS\n ";
	cin>>n1>>n2;
	do
	{
		cout<<"\nNUMBER 1: "<<n1<<"\tNUMBER 2: "<<n2;
		cout<<"\n\t\tOPERATOR MENU";
		cout<<"\n\t1. ADDITION (+) ";
		cout<<"\n\t2. SUBTRACTION (-) ";
		cout<<"\n\t3. MULTIPLICATION (*)";
		cout<<"\n\t4. DIVISION (/) ";
		cout<<"\n\t5. EXIT (E)";
		cout<<"\nENTER OPTION NUMBER OR OPERATOR:  ";
		cin>>ch;
		switch(ch)
		{
			case '1' :
			case '+' : cout<<n1<<" + "<<n2<<" = "<<n1+n2;
			          break;
			case '2' :
			case '-' : cout<<n1<<" - "<<n2<<" = "<<n1-n2;
			          break;
			case '3' :
			case '*' :cout<<n1<<" * "<<n2<<" = "<<n1*n2;
			          break;
			case '4' :
			case '/' :cout<<n1<<" / "<<n2<<" = "<<n1/n2;
			          break;
		    case '5' :
			case 'E' :
		    case 'e' :cout<<"\tThank You For Using The Program\n";
			          break;
			 default : cout<<"INVALID CHOICE !!";
				  }
			  } while(ch!='5' && ch!='E' && ch!='e');
		  }
