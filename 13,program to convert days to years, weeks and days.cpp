#include<iostream>
using namespace std;
int main()           //converting days to years, weeks and days
{
	int n,y,w,d;
	cout<<"Enter days: ";
	cin>>n;
	y=n/365;
	d=n%365;
	w=d/7;
	d=d%7;
	cout<<"There are "<<y<<" years "<<w<<" Weeks and "<<d<<" Days in "<<n<< " days";
	return 0;
}
