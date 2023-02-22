#include<iostream>
using namespace std;
int main()    //fibonacci series 1,1,2,3,5,8,....
{
	int i,n,f,s,sum;
	f=1;
	s=1;
	sum=1;
	cout<<"Enter number for series elments: " ;
	cin>>n;
	cout<<"Fibonacci series "<<endl;
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			cout<<sum<<"\t";
		}
    else
    {
    	sum=0;
		sum=f+s;
		f=s;
		s=sum;
		cout<<sum<<"\t";
	}
	}
	
	return 0;
 }
