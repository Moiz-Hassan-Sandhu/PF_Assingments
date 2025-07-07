#include<iostream>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY-A
	//Message Encryption with ASCII Shift with Modulo Operation 
	unsigned char x;
	cout<<"Enter the charachter to encrypt: ";
	cin>>x;
	x=(x+5)%128;
	cout<<"Encrypted Charachter: "<<x<<endl;
	x=(x-5+128)%128;
	cout<<"Dcrypted Charachter: "<<x<<endl;
}
