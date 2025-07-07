//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	int i, j, k;
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=6; j++)
		{
			cout<<"     ";
		}
		for(j=6; j>=i; j--)
		{
			cout<<"*";
		}
		for(j=1; j<=i; j++)
		{
			cout<<" ";
		}
		for(j=6; j>=i; j--)
		{
			cout<<"//";
		}
		for(j=2; j<=i; j++)
		{
			cout<<"\\\\";
		}
		for(j=i; j>=1; j--)
		{
			cout<<" ";
		}
		for(j=6; j>=i; j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
