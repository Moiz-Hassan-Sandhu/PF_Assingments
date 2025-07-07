//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<<"Enter the 1st number: ";
	cin>>num1;
	cout<<"Enter the 2nd number: ";
	cin>>num2;
	if(num1==0)
	{
		num1=num2;
	}
	else if(num2==0)
	{
		num1=num1;
	}
	else if(num1==num2)
	{
		num1=num1;
	}
	else if(num1!=num2)
	{
		for(; num1!=num2 ;)
		{
			if(num1>num2)
			{
				num1=num1-num2;
			}
			else
			{
				num2=num2-num1;
			}
		}
	}
	else
	{
		cout<<"Unexpected Error";
	}
	cout<<"HCF: "<<num1;
}
