#include<iostream>
using namespace std;
int main()
{
	//Moiz Hassan i242096 CY A
	float salary, tax;
	cout<<"Enter the basic salary: ";
	cin>>salary;
	salary=(salary*3/2)+500;
	tax=salary/10; //10% tax
	salary=salary-tax;
	cout<<"Salary after tax: "<<salary;
}
