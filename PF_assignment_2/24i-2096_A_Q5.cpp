//i242096 Moiz Hassan CY A
#include<iostream>
using namespace std;
int main() {
	int x, y, a, b, c, d, ac, bd, ad_bc, prod;
	cout<<"Enter 1st 4 digit number: ";
	cin>>x;
	cout<<"Enter 2nd 4 digit number: ";
	cin>>y;

	//dividing 1st number in 2 parts
	a=x/100;
	b=x%100;

	//dividing 2nd number in 2 parts
	c=y/100;
	d=y%100;

	//multiplying alternating parts
	ac=a*c;
	bd=b*d;

	//Step 3
	ad_bc=((a+b)*(c+d))-ac-bd;
	
	//final product
	prod=(ac*10000)+((ad_bc)*100)+bd;
	cout<<endl<<"Product of numbers = "<<prod;
	return 0;
}
