#include<iostream>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY A
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	x=(x<<4); //multipling by using bitwise left shift
	x=x+250;
	cout<<"Number after the shifting left and adding 250= "<<x;
	return 0;	
}
