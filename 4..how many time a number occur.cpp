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
	int no,count;
	cout<<"Enter a number to check how many time that number repeat : ";
	cin>>no;
	for(int i=0;i<5;i++)
	{
		if (no==arr[i])
		count++;
	}
	cout<<"Number occur "<< count <<" times ";
	return 0;
}
