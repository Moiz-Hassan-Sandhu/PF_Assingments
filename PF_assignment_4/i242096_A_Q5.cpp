//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	int n, r, sum=0, rev=0;
	cout<<"Enter the number: ";
	cin>>n;
		while(n/10!=0)
		{
			r=n%10;
			rev=rev+r;
			n=n/10;
			rev=rev*10;
			sum=sum+r;
		}
	sum=sum+n;
	rev=rev+n;
	cout<<"Reversed Number: "<<rev<<endl
		<<"Sum of Digits: "<<sum<<endl;
	return 0;
}
