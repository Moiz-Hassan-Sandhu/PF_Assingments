//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	int num, c, n=0, sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	n=num%10;
	num=num/10;
	while(num/10!=0)
	{
		c=num%10;
		sum=sum+c;
		num=num/10;
	}
	sum=sum+num;
	if(sum==n)
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	return 0;
}
	
	
