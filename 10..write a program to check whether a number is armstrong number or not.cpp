#include<iostream>
using namespace std;
int main()          
{
	int n,arm=0,r,c;
	cout<<"Enter a number: ";
	cin>>n;
	c=n;
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm)
	cout<<"This is armstrong number"<<endl;
	else
	cout<<"This is not armstrong number"<<endl;
	return 0;
}

