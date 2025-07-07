#include<iostream>
//#include<bitset>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY A
	unsigned short int x, k;
	cout<<"Enter the 8-bit number: ";
	cin>>x;
	bool y;
	k=x;
	//cout<<bitset<8>(x)<<endl;
	y=((x&0b00000010)==0b00000010);//checking if the 2nd bit is 1 or 0
	if(y==1)
	{
		cout<<"2nd bit is 1 (1 for set, 0 for not set)"<<endl;
	}
	if(y==0)
	{
		cout<<"2nd bit is 0 (1 for set, 0 for not set)."<<endl;
	}
	y==0;
	y=((x&0b00010000)==0b00010000);//checking if the 5th bit is 1 or 0
	if(y==1)
	{
		cout<<"5th bit is 1 (1 for set, 0 for not set)."<<endl;
	}
	if(y==0)
	{
		cout<<"5th bit is 0 (1 for set, 0 for not set)."<<endl;
	}			
	cout<<"Value after toggling the 6th bit: "<<(k^0b00100000);
	
}
