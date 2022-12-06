#include<iostream>
using namespace std;
void sort(int *ptr,int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ptr[j]<ptr[i])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
}
int main()
{
	int arr[10];
	cout<<"Enter the element of array"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,10);
}