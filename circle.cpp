#include <iostream>  // TO FIND AREA AND PERIMETER OF A CIRCLE
using namespace std;
int main()
{
	float const pi =22/7;
	float radius,area, perimeter;
cout<<"ENTER THE RADIUS : ";
cin>>radius;
perimeter = 2*pi*radius;
cout<< "perimeter = "<<perimeter<<"\n";
area = pi*(radius*radius);
cout<<"AREA = " <<area;

return 0;
}
