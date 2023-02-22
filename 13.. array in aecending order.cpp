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
	int temp=0;
	cout<<"\nSorting array in acending order"<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if (arr[i]>arr[j])
			{
				//swapping
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
            cout<<arr[i]<<"\t";	
	}
          return 0;
}
