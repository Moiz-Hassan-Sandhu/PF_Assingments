//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	int i, j, k;
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=1; j--)
		{
			if(j>i)
			{
				cout<<" ";
			}
		}
		for(j=1; j<=i; j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
