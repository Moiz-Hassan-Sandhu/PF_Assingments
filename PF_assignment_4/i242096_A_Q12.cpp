//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	int i=1;
	float rate=2500, per=0, temp=0;
	do
	{
		temp=rate;
		per=rate*4/100;
		rate=temp+per;
		cout<<"Year "<<i<<": $"<<rate<<endl;
		i++;
	}while(i<=10);
	return 0;
}
