//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	double i=1, f;
	double sum=0, max, min;
	cout<<"Enter floating point eg: x.xxx number "<<i<<" : " ;
	cin>>f;
	max=f;
	min=f;
	i=2;
	do
	{	
		cout<<"Enter floating point eg: x.xxx number "<<i<<" : " ;
		cin>>f;
		if(f>max)
		{
			max=f;	
		}
		else if(f<min)
		{
			min=f;
		}
		sum=sum+f;
		i++;
	}while(i<=7);
	cout<<"SUM: "<<sum<<endl;
	cout<<"MAXIMUM: "<<max<<endl;
	cout<<"MINIMUM: "<<min<<endl;
	cout<<"AVERAGE: "<<sum/7<<endl;
}
