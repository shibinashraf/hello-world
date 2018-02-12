#include<iostream> //program for inserting score of students
using namespace std;
int main()
{
	int score[5],i ;
     for(i=0; i<5; i++)
 {
	 cout<<"ENTER THE SCORE OF A STUDENT :";
	 cin>>score[i];
 } 
 for(i=4;i>=0; i--)
 {
	 cout<<"\nSCORE OF STUDENT "<<i+1<<" is "<<score[i]; 
 }
return 0;
}

