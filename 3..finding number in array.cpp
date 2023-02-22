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
	int no;
	cout<<"Enter a number to find : ";
	cin>>no;
	bool flag;
	for(int i=0;i<5;i++)
	{
		if (no==arr[i])
		flag++;
	}
	if(flag==1)
	cout<<"Number is found"<<endl;
	else
	cout<<"Number not found"<<endl;
	return 0;
}
