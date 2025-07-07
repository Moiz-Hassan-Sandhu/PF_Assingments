#include<iostream>
//#include<bitset>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY A
	char a;
	int k1, k2, k3;
	cout<<"Enter the character to encrypt: ";
	cin>>a;
	cout<<"Enter three keys: ";
	cin>>k1>>k2>>k3;
	a=a^k1;	 
	a=a^k2;
	a=a^k3;
	cout<<"Encrypted character: "<<a<<endl;
	a=a^k3;
	a=a^k2;
	a=a^k1;
	cout<<"Decrypted character: "<<a<<endl;
}
