#include <iostream>
#include<cmath>
using namespace std;
int main()
{
const float pi=22.0/7;
int angle, side;
float radians, length, opp_side, adj_side, hyp;
cout<<"Enter the angle in degree: ";
cin>>angle;
radians=angle*pi/180;
cout<<"\n1. Opposite side " 
    <<"\n2. Adjacent side "
    <<"\n3. Hypotenuse ";
cout<<"\nInput 1, 2 or 3 to specify the side: ";
cin>>side;
cout<<"Enter the length: ";
cin>>length;
switch(side)
{   
    case 1: opp_side=length;
            adj_side=opp_side / tan(radians);
            hyp= sqrt(pow(opp_side,2)+ pow(adj_side,2));
            break;
    case 2: adj_side=length;
            hyp=adj_side / cos(radians);
             opp_side= sqrt(pow(hyp,2)- pow(adj_side,2));
             break;
    case 3: hyp=length;
            opp_side=hyp * sin(radians);
            adj_side= sqrt(pow(hyp,2) - pow(opp_side,2));
                break;
}
cout<<"Angle in degree = "<<angle ;
cout<<"\nOpposite side = "<<opp_side ;
cout<<"\nAdjacent side = "<<adj_side ;
cout<<"\nHypotenuse    = "<<hyp ;
 return 0;
 }