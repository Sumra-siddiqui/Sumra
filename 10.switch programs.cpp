#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n Enter a number from 1-9: "<<endl;
	cout<<"press 1 for printing minimum number in an array "<<endl;
	cout<<"press 2 for printing maximum number in an array "<<endl;
	cout<<"press 3 for searching number in an array "<<endl;
	cout<<"press 4 for searching how many time a number comes in an array "<<endl;
	cout<<"press 5 for printing odd numbers in an array "<<endl;
	cout<<"press 6 for printing even number in an array "<<endl;
	cout<<"press 7 for printing sum of an array "<<endl;
	cout<<"press 8 for printing reverse of an array "<<endl;
	cout<<"press 9 for printing all unique elements in an array "<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			{
				int arr[5];
	          for(int i=0;i<5;i++)
          	{
	        	cout<<"Enter value "<<i+1<<": ";
	        	cin>>arr[i];
	}
				int min=arr[0];
	for(int i=0;i<5;i++)
	{
		if (min>arr[i])
		min=arr[i];
	}
	    cout<<"\nminimum number is "<<min<<endl;
	    break;
			}
	  	case 2:
     		{
     			int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
	}
     			int max=arr[0];
	for(int i=0;i<5;i++)
	{
		if (max<arr[i])
		max=arr[i];
	}
	cout<<"\nmiximum number is "<<max<<endl;
	break;
	 }	    
	case 3:
		{
			int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
	}
			int no;
	cout<<"\nEnter a number to find : ";
	cin>>no;
	bool flag;
	for(int i=0;i<5;i++)
	{
		if (no==arr[i])
		flag++;
	}
	if(flag==1)
	cout<<"\nNumber is found"<<endl;
	else
	cout<<"\nNumber not found"<<endl;
	break;
		}
	case 4:
		{
			int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
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
		break;
		}
		case 5:
		{
			int arr[5];
	       for(int i=0;i<5;i++)
    	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
    	}
			cout<<"odd nubmbers are ";
     	for(int i=0;i<5;i++)
    	{
 		    if(arr[i]%2!=0)
		    cout<<arr[i]<<"\t";
	}
		break;
		}
	case 6:
		{
			int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
	}
			cout<<"Even nubmbers are ";
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		cout<<arr[i]<<"\t";
	}
		break;
		}
	case 7:
		{
			int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
	}
			int sum;
    	sum=arr[0];
	for(int i=1;i<5;i++)
	{
	    sum=sum+arr[i];	
	}
	    cout<<"\nsum is "<<sum;
		break;
		}	
	case 8:
		{
			int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
	}
		cout<<" Reverse of array is ";
	  for(int i=4;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}
  	break;
		}
		case 9:
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
		break;
		}
	
	default:
		cout<<"Number in invalid";
	}
	return 0;
}

	
	
	
	
