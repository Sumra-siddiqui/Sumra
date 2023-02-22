#include<iostream>
using namespace std;
int main()
{
	int i,n,count=0;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	  if(n%i==0)
	  {
	  	count++;
	  }
	}
	if(count==2)
	{
	  cout<<"This is prime number.";
	}
	else
	{
      cout<<"This is not prime number.";
	}
	return 0;
}
