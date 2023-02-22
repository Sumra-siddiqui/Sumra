#include<iostream>
using namespace std;
int main()     // swap two numbers without third variable
{
	int a,b; 
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"swapping both numbers: " ;
	swap(a,b);
	cout<<a<<" "<<b;
	
	return 0;
}
