#include<iostream>
using namespace std;
int main()           //printing multiplication table of a number.
{
	int i,n,m;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Multiplication Table of "<<n<<" is "<<endl;
	for(i=1;i<=10;i++)
	{
		m=n*i;
	    cout<<n<<" * "<<i<<" = "<<m<<endl;
	}
	
	return 0;
}
