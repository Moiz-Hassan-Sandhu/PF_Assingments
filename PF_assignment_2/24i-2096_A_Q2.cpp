#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//i242096 Moiz Hassan CY-A
	int x, i500,i100, i50, i20, i10, i5, i1, n500=0, n100=0, n50=0, n20=0, n10=0, n5=0, n1=0;
	cout<<"Enter the ammount of money: ";
	cin>>x;
	cout<<endl<<"Currency Note:"<<setw(10)<<"Number";
	
	i500=x%500; //500 notes
	n500=x/500;
	cout<<endl<<"500:"<<setw(20)<<n500;
	
	i100=i500%100;	//500 notes
	n100=i500/100;
	cout<<endl<<"100:"<<setw(20)<<n100;

	i50=i100%50;	//50 notes
	n50=i100/50;
	cout<<endl<<"50:"<<setw(21)<<n50;

	i20=i50%20;	//20 notes
	n20=i50/20;
	cout<<endl<<"20:"<<setw(21)<<n20;

	i10=i20%10;	//10 notes
	n10=i20/10;
	cout<<endl<<"10:"<<setw(21)<<n10;

	i5=i10%5;	//5 notes
	n5=i10/5;
	cout<<endl<<"5:"<<setw(22)<<n5;

	n1=i5;	//1 notes
	cout<<endl<<"1:"<<setw(22)<<n1;
}
