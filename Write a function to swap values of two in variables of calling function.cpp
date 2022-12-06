#include<iostream>
using namespace std;
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return 0;
}
int main()
{
	int x,y;
	cout<<"enter the number:";
	cin>>x>>y;
	swap(&x,&y);
	cout<<"swaped numbers are "<<x<<" "<<y;
}