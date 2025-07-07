#include<iostream>
//#include<bitset>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY A
	unsigned short int x, k, count=0;
	cout<<"Enter the 8-bit number: ";
	cin>>x;
//	cout<<bitset<8>(x)<<endl;
	count=(count+(1*(x&1==1)));			//checking 1st bit
	count=(count+(1*((x>>1)&1)==1));	//checking 2nd bit
	count=(count+(1*((x>>2)&1)==1));	//checking 3rd bit 
	count=(count+(1*((x>>3)&1)==1));	//checking 4th bit
	count=(count+(1*((x>>4)&1)==1));	//checking 5th bit
	count=(count+(1*((x>>5)&1)==1));	//checking 6th bit
	count=(count+(1*((x>>6)&1)==1));	//checking 7th bit
	count=(count+(1*((x>>7)&1)==1));	//checking 8th bit
//	cout<<count<<endl;
	cout<<"Parity: "<<(0b1^(count&0b1==0))*1<<endl;
	x=(x^0b11111111);
	cout<<"Inverted value: "<<x<<endl;
	//cout<<bitset<8>(x)<<endl;
	return 0;
}
