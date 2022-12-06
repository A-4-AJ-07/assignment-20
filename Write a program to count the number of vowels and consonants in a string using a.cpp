#include<iostream>
using namespace std;
int count(char *str)
{
	int x=0,y=-1;//since it count enter also
	for(int i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		x++;
		else
		y++;
	}
	cout<<"Number of vowels : "<<x<<" number of consonants : "<<y;
	
}
int main()
{
	char str[100];
	fgets(str,100,stdin);
	count(str);
}