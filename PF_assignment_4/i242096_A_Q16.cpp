//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number for Generic output: ";
	cin>>n;
	int i, j, k=0, l;
	for(i=1; i<=n; i++)
	{
		for(k=n-1; k>=i; k--)
		{
			cout<<"  ";
		}
		for(j=1; j<=i; j++)
		{
			if((j<=i))
			{
			cout<<j;
			cout<<" ";
			}
		}
		for(j=i-1; j>=1; j--)
		{
			if((j<=i))
			{
				cout<<j;
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
