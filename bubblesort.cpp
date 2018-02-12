#include<iostream> //Bubble sort 
using namespace std;
int main()
{
 int AR[25] , N;
 int I, J, TEMP;
 cout<<"How many elements?";
 cin>>N;
 cout<<"ENTER the array elements: ";
 for(I=0; I<N; I++)
    cin>>AR[I];
    for(I=1;I<N;I++)
	 for(J=0;J<N-1;J++)
	 if(AR[J] > AR[J+1])
	 {
		 TEMP = AR[J];
		 AR[J] = AR[J+1];
		 AR[J+1] = TEMP;
	 }
	 cout<<"SORTED ARRAY IS : ";
	 for(I=0; I<N; I++)
	 cout<<AR[I]<<"\t";
 }
		

