#include<iostream>
using namespace std;
int main()           //checking number is positive, negative or zero
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(n>0)
	{
		cout<<"\nNumber is positive";
	}
	else if(n<0)
	{
		cout<<"\nNumber is negative";
	}
	else
	cout<<"\nNumber is zero";
	return 0;
}
