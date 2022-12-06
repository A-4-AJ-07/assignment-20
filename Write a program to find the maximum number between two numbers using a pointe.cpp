#include<iostream>
using namespace std;
void max(int *x,int *y)
{
	if(*x>*y)
	cout<<*x<<" is the max number";
	else
	cout<<*y<<" is the max number";
}
int main()
{
	int a,b;
	cout<<"Enter the numbers:"<<endl;
	cin>>a>>b;
	max(&a,&b);
	
}