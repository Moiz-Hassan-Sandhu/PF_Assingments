//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	double n, sum=1;
	int i=2;
	cout<<"Enter the (n) order: ";
	cin>>n;
	do
	{
		if(i%2==0)
		{
			sum=sum-1.0/i;
			i++;
			
		}
		if(i%2==1)
		{
			sum=sum+1.0/i;
			i++;
		}
	}while(i<=n-1);
	cout<<"Result of the series: "<<sum<<endl;
}
