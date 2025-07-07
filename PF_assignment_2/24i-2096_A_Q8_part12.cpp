#include<iostream>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY-A
	//Message Encryption with ASCII Shift without Modulo Operation 
	unsigned char x,y,z;
	cout<<"Enter the charachter to encrypt: ";
	cin>>x;
	y=(x+5)/128;
	y=(x+5)-(y*128);
	cout<<"Encrypted Charachter: "<<y<<endl;
	//difference of range and shift and then add the encrypted character in the difference and take mod with the range
	z=((128-5)+y)/128;
	z=((y-5+128)-(z*128));
	cout<<"Dcrypted Charachter: "<<z<<endl;
}

