#include<iostream>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY-A
	float total, pallet,  widgets;
	cout<<endl<<"Enter the weight of the pallet: ";
	cin>>pallet; //weight of palet with widgets
	cout<<"Enter the weight of the pallet with widgets: ";
	cin>>total;
	total=total-pallet;
	widgets=total/9.2;
	cout<<endl<<"Number of widgets on the pallet: "<< widgets<<" approximatly"<<endl;
}
	

