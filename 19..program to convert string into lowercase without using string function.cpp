#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  	char Str1[100];
  	int i;
  	cout<<"\nEnter a string to Convert into Lowercase :  ";
  	gets(Str1);
  	for (i= 0;Str1[i]!='\0'; i++)
  	{
  		if(Str1[i]>='A'&& Str1[i]<='Z')
  		{
  			Str1[i] = Str1[i] + 32;
		}
  	}
  	cout<<"\n String in Lower Case:"<<Str1;
  	
  	return 0;
}
