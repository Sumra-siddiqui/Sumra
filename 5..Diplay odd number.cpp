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
	cout<<"odd nubmbers are ";
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		cout<<arr[i]<<"\t";
	}
	return 0;

	}
