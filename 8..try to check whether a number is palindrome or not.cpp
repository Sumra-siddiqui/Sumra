#include<iostream>
using namespace std;
int main()
{
	int n,c,s,r;
	cout<<"Enter a number: ";
	cin>>n;
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
	cout<<"This is palindrome number"<<endl;
	else
	cout<<"This is not palindrome number"<<endl;
	return 0;
}
