#include<iostream>
using namespace std;
int main()
{
	int n,r;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"reverse of a number is:"<<endl;
	while(n>0)
	{
		r=n%10;
		cout<<r;
		n=n/10;
	}
	return 0;
}
