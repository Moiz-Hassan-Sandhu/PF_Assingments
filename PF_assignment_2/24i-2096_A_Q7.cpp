//i242096 Moiz Hassan CY-A
#include<iostream>
#include<string>
using namespace std;
int main() {
	unsigned int id;
	int belt, batch, log, unit;
	char name[30]="";
	cout<<"Enter name soldier: ";
	cin.getline(name, 30, '\n');
	cout<<endl;
	cout<<"!!!Enter the id max upto 4294967295!!!"<<endl;
	cout<<endl;
	cout<<"Enter the ID of soldier: ";
	cin>>id;
	cout<<endl;
	
	//7 bits for belt number
	belt=(id & 127);

	//10 bits for batch number
	batch=(id>>7)&1023;

	//5 bits for log number
	log=(id>>17)&31;
	
	//10 btis for unit number
	unit=(id>>22)&1023;
	
	cout<<endl;
	cout<<"Belt Number of "<<name<<" :"<<belt<<endl;
	cout<<endl;
	cout<<"Batch Number of "<<name<<" :"<<batch<<endl;
	cout<<endl;
	cout<<"Log Number of "<<name<<" :"<<log<<endl;
	cout<<endl;
	cout<<"Unit Number of "<<name<<" :"<<unit<<endl;
}