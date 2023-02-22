#include<iostream>
using namespace std;
int main()
{
	int arr1[5],arr2[5];
	cout<<"Enter values of array 1"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr1[i];
	}
	cout<<"values are ";
	for(int i=0;i<5;i++)
	{
		cout<<arr1[i]<<"\t";
	}
	cout<<"\nEnter values of array 2"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr2[i];
	}
	cout<<"values are ";
	for(int i=0;i<5;i++)
	{
		cout<<arr2[i]<<"\t";
	}
	int i;
	if(arr1[i]=arr2[i])
	{
		cout<<"\nArrays are same";
	}
	else
	cout<<"\nArrays are not same";
	return 0;
}
