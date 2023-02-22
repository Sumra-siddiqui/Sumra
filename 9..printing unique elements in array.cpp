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
	cout<<"Unique number is ";
	for(int i=0;i<5;i++)
	{
		int count=0;
		for(int j=0;j<5;j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			cout<<arr[i]<<"\t";
		} 	
}
}

