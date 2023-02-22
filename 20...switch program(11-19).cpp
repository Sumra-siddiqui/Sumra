#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n Enter a number from 11-19: "<<endl;
	cout<<"press 11 for seperating odd and even integers in an array "<<endl;
	cout<<"press 12 for counting odd and even integers in an array "<<endl;
	cout<<"press 13 for sorting array in acsending order"<<endl;
	cout<<"press 14 for sorting array in decsending order "<<endl;
	cout<<"press 15 for printing second smallest element in an array "<<endl;
	cout<<"press 16 for printing second largest element in an array "<<endl;
	cout<<"press 17 for checking if arrays are same or not "<<endl;
	cout<<"press 18 for merging two arrays "<<endl;
	cout<<"press 19 for finding maximum difference between two elemens in an array "<<endl;
	cin>>n;
	switch(n)
	{
		case 11:
		{
	    	int i,j,k;
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
	
	      break;
	}
	    case 12:
	   	{
	    	int arr[5];
	    for(int i=0;i<5;i++)
     	{
		   cout<<"Enter value "<<i+1<<": ";
		   cin>>arr[i];
        }
	      	int count=0;
	        cout<<"\nNubmber of odd integers are ";
	    for(int i=0;i<5;i++)
	    {
		
	      	if(arr[i]%2!=0)
	       	count++;
	
	    }
 	        cout<<count<<endl;
            count=0;
	        cout<<"\nNubmber of even integers are ";
	    for(int i=0;i<5;i++)
	    {
	    	if(arr[i]%2==0)
		    count++;
        }
	        cout<<count;
	        break;
	}
		case 13:
		{
    		int arr[5];
    	for(int i=0;i<5;i++)
    	{
	    	cout<<"Enter value "<<i+1<<": ";
	    	cin>>arr[i];
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
	        break;
	}
		case 14:
		{
			int arr[5];
        for(int i=0;i<5;i++)
	    {
		    cout<<"Enter value "<<i+1<<": ";
		    cin>>arr[i];
	    }

			int temp=0;
	        cout<<"\nSorting array in descending order"<<endl;
     	for(int i=0;i<5;i++)
	    {
	    	for(int j=i+1;j<5;j++)
		   {
		    	if (arr[i]<arr[j])
			{
				//swapping
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
            cout<<arr[i]<<"\t";	
	    }
	        break;
	}
	    case 15:
		{
	    	int arr[5];
    	for(int i=0;i<5;i++)
	    {
	    	cout<<"Enter value "<<i+1<<": ";
		    cin>>arr[i];
    	}
			int temp=0;
	        cout<<"\nSecong smallest element in array is "<<endl;
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
            	
	}
        	cout<<arr[1];
	        break;
	}
	    case 16:
		{
			int arr[5];
	    for(int i=0;i<5;i++)
    	{
	    	cout<<"Enter value "<<i+1<<": ";
		    cin>>arr[i];
	}
			int temp=0;
	         cout<<"\nSecond largest element in array is"<<endl;
	    for(int i=0;i<5;i++)
     	{
	    	for(int j=i+1;j<5;j++)
	    	{
		    	if (arr[i]<arr[j])
		    	{
			    	//swapping
			    	temp=arr[i];
				    arr[i]=arr[j];
				    arr[j]=temp;
			    }	
	    	}  
    	}
	        cout<<arr[1];
		    break;	
		}
		case 17:
		{
	    	int arr1[5],arr2[5];
	        cout<<"Enter values of array 1"<<endl;
    	for(int i=0;i<5;i++)
    	{
	    	cout<<"Enter value "<<i+1<<": ";
		    cin>>arr1[i];
	    }
	        cout<<"\nEnter values of array 2"<<endl;
    	for(int i=0;i<5;i++)
    	{
	    	cout<<"Enter value "<<i+1<<": ";
		    cin>>arr2[i];
	    }

	    int i;
	    if(arr1[i]==arr2[i])
	    {
		cout<<"\nArrays are same";
    	}
 	else
	   cout<<"\nArrays are not same";
    	break;
	}
	case 18:
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
    break;
	}
	case 19:
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
		int max,temp=0;
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
	
	}
	cout<<"\nmaximum difference is"<<endl;
		max=arr[4]-arr[0];
        cout<<max;
     	break;	
	}
	default:
	cout<<"Number is invalid";
}
return 0;
}
