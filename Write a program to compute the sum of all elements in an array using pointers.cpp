#include<iostream>
using namespace std;
void sum(int *arr,int size)
{   
    int total=0;
	for(int i=0;i<size;i++)
	{
		total=total+arr[i];
	}
	cout<<"total of array: "<<total;
}
int main()
{
	int arr[10];
	cout<<"Enter the element of arrays:";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	sum(arr,10);
	
}