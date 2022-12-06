#include<iostream>
#include<string.h>
using namespace std;
void swap(char *str1,char *str2)
{
	char temp[10];
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
}
int main()
{
	char str1[10],str2[10];
	cout<<"Enter the element of string 1:";
    fgets(str1,10,stdin);
    cout<<"Enter the element of string 2:";
    fgets(str2,10,stdin);
    swap(str1,str2);
    cout<<"string after swap"<<endl;
    puts(str1);
    puts(str2);
}