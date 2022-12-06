#include<iostream>
using namespace std;
void reverse(int *arr,int size)
{
	cout<<"Reverse of array:";
	for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[10];
	cout<<"Enter the element of array:";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,10);
}