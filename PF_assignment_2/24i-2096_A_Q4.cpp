#include<iostream>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY-A
	int days, y, m, ny, nm, nd;
	cout<<"Enter the number of days: ";
	cin>>days;
	y=days%365;	//number of years
	ny=days/356;
	m=y%30;	//number of months
	nm=y/30;
	nd=m;	//number of days
	cout<<ny<<" years "<<nm<<" months "<<nd<<" days";
	return 0;
}
