//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	int i=1, days;
	double sum=0, salary=1;
	cout<<"Enter the number of days: ";
	cin>>days;
	while(days<0)
	{
		cout<<"Invlid input! Enter Days again: ";
		cin>>days;
	}
	do
	{
		salary=salary*2;
		cout<<"Salary on Day "<<i<<": $"<<salary/100<<endl;
		sum=sum+salary;
		i++;
	}while(i<=days);
	cout<<endl;
	cout<<"Total Pay: $"<<sum/100<<endl;
}
