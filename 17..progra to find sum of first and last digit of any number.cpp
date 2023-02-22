#include<iostream>
using namespace std;
int main()     
{ 
  int n,r,s,f;
  cout<<"Enter a number: ";
  cin>>n;
  f=n%10;
  cout<<"Sum of first and last digit is: ";
  while(n!=0)
  {
  	r=n%10;
  	n=n/10;	
  }
  
  cout<<f+r;
  return 0;
}
