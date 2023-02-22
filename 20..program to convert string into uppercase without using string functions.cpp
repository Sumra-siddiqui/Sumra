#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  	char Str1[100];
  	int i;
  	cout<<"Enter a String to Convert into Uppercase :  ";
  	gets(Str1);
  	for (i=0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'a' && Str1[i] <= 'z')
  		{
  			Str1[i] = Str1[i] -32;
		}
  	}

  	cout<<"\n String in Upper Case :"<<Str1;
  	return 0;
}
