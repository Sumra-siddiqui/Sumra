#include<iostream>
using namespace std;
int main()           //check year is leap year or not
{
	int y;
	cout<<"Enter a year: ";
	cin>>y;
	if(y%4==0)
	cout<<y<<" is a leap year ";
	else 
	cout<<y<<" is not a leap year ";
	return 0;
}
   
