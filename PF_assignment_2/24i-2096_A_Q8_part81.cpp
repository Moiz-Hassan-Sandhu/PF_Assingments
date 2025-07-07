#include<iostream>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY A
	int x;
	cout<<"Enter the number: ";
	cin>>x;
	x=x%256;
	x=x+100;
	x=x%256;
	cout<<"Final result: "<<x;
}
