#include<iostream> //binary search to find an item in the sorted array
using namespace std;
int main()
{
int list[25], max;
int first , last, middle, i, item, loc = -1;
cout<<"how many elements?";
cin>>max;
cout<<"enter array elements in ascending order ";
for(i=0;i<max;i++)
cin>>list[i];
cout<<"enter the item to be searched :";
cin>>item;
first=0;
last=max;
while(first<=last)
{
	middle=(first+last)/2;
	if (item==list[middle])
	{ 
		loc=middle;
		break;
		}
	if(item<list[middle])
	last =middle-1;
	else
	first= middle+1;
}
if(loc!= -1)
cout<<"The item is found at position "<<loc+1;
else
cout<<"The item is not found in the array! ";
 
}
