#include<iostream>
using namespace std;
int length(char *str)
{   
    int x=-1;
	for(int i=0;str[i]!=NULL;i++)
	{
		x++;
	}
	cout<<x;
}
int main()
{
	char str[100];
	fgets(str,100,stdin);
	length(str);
}