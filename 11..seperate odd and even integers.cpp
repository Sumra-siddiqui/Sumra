#include<iostream>
using namespace std;
int main()
{
	int i;
	int j,k;
	int arr[5],odd[j],even[k];
	for(i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"\nodd integers in an array are "<<endl;
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		odd[j]=arr[i];
		j++;
    }
    for(int i=0;i<j;i++)
    {
     cout<<odd[i]<<"\t";	
	}
    cout<<"\nEven integers in an array are "<<endl;
    for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		even[k]=arr[i];
		k++;
	}	
	for(int i=0;k<5;i++)
	{
		cout<<even[i]<<"\t";
	}
	
	return 0;
}
    
