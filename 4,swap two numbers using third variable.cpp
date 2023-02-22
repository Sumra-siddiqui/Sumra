#include<iostream>
using namespace std;
int main()     // swap two numbers with third variable
{
	int a,b,temp; 
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"swapping both numbers: " ;
	temp=0;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b;
	
	return 0;
}
