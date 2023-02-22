#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"values are ";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int sum;
	sum=arr[0];
	for(int i=1;i<5;i++)
	{
	    sum=sum+arr[i];
		
	}
	cout<<"sum is "<<sum;
	return 0;

}
