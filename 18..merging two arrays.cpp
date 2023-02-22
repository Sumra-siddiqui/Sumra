#include<iostream>
using namespace std;
int main()
{
	int arr1[6],arr2[5],arr3[11];
	int i;
	cout<<"Enter values of array 1"<<endl;
	for( i=0;i<6;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr1[i];
		arr3[i]=arr1[i];
	}
	cout<<"\nEnter values of array 2"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr2[i];
		arr3[i+6]=arr2[i];
	}
	cout<<"\nMerged array is"<<endl;
	for(i=0;i<11;i++)
	{
		cout<<arr3[i]<<"\t";
	}
	return 0;
}
	
