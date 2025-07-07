#include<iostream>
using namespace std;
int main()
{
	//Finding modulus without % operator
	int x, rem;
	cout<<"Enter the number: ";
	cin>>x;
	rem=x/256;
	rem=(x-(rem*256));
	x=rem+100;
	rem=x/256;
	rem=(x-(rem*256));
	cout<<"Final result: "<<rem;
}
