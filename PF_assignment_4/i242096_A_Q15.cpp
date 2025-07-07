//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
    int i=1,floors, floortotal, sfloortotal, occ, unocc=0, socc=0;
    float percentage=0;
    cout<<"Enter the number of floors: ";
    cin>>floors;
    while(floors<1)
    {
        cout<<"Invalid Floor, Please Enter again: ";
        cin>>floors;
    }
    for(i=1; i<=floors ;i++)
    {
        cout<<"Enter the Total Rooms in the floor "<<i<<": ";
        cin>>floortotal;
        while(floortotal<10)
		{
			cout<<"Invalid Total rooms, Please Enter again, value greater than 9: ";
			cin>>floortotal;
		}
        cout<<"Enter the number of Occupied Rooms in the floor "<<i<<": ";
        cin>>occ;
        
        sfloortotal=sfloortotal+floortotal;
        socc=socc+occ;
        cout<<endl;
    }
    cout<<"Total Rooms in Hotel: "<<sfloortotal<<endl;
    cout<<"The number of occupied rooms: "<<socc<<endl;
    unocc=sfloortotal-socc;
    cout<<"The total number of unoccupied rooms: "<<unocc<<endl;
    percentage=(float)socc/sfloortotal*100;
    cout<<"The percentage of occupied rooms: "<<percentage<<"%"<<endl;
}
