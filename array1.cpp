//to input scores of five students and display them in reverse order 
#include <iostream>
using namespace std;
int main()
{
    int i, score[5];
    for(i=0; i<5; i++)
    {
        cout<<"enter a score: ";
        cin>>score[i];
    }
    for(i=4; i>=0; i--)
    cout<<"SCORE ["<<i<<"] is "<< score[i]<<"\n";
    return 0;
}