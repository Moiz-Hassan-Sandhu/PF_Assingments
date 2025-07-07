//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i=1, t, c, d=0;
	float s=0, v;
	
	do
	{
	cout<<"Enter the Speed: ";
	cin>>v;
	}while(v<0);
	
	do
	{
	cout<<"Enter the Time in hours: ";
	cin>>t;
	}while(t<1);
	
	cout<<endl;
	cout<<"Hours       Distance Traveled"<<endl;
	do
	{
		s=v*i;
		cout<<setw(3)<<i<<setw(18)<<s<<endl;
		i++;
	}while(i<=t);
}
