#include<iostream> 
using namespace std;
int main()
{
	int i;
	int sum;	
	int score;
	int n;
	float avg;
		cout<<"ENTER THE NUMBER OF STUDENTS : ";
		cin>>n;
			for (i=1 , sum =0 ; i<=n ; ++i)
			{
				cout<<"ENTER THE SCORE OF  STUDENT " <<i<< " : ";
				cin>>score;
				sum = (float)sum + score;
			}
	avg = sum/n;
	cout<<"THE AVERAGE SCORE IS "<<avg<<"\n";
	
	return 0;
}
