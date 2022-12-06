#include<iostream>
#include<string.h>
using namespace std;
int reverse(char *str,int size)
{
	int i;
	for(i=size;i>=0;i--)
	{
		cout<<str[i];
	}
}
int main()
{
	int l;
	char str[100];
	cout<<"Enter the string:";
	fgets(str,100,stdin);
	l=strlen(str);
	reverse(str,l);
}