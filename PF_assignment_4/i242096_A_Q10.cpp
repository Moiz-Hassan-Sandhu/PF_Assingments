//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	float mili=0;
	cout<<"_____________________________"<<endl;
	cout<<"     Year   |  Water Level   "<<endl;
	cout<<"------------|----------------"<<endl;
	for(i=2024; i<=2044 ; i++)
	{
		mili=mili+1.5;
		cout<<setw(9)<<i<<setw(4)<<"|"<<setw(9)<<mili<<" mm"<<endl;
	}
	return 0;
}
