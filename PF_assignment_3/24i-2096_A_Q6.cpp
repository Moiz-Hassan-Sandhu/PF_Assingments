#include<iostream>
using namespace std;
//24i2096 Moiz Hassan CY A
int main()
{
    int d=12;
    char EP;
    cout<<"Enter the entery point: ";
    cin>>EP;
    switch(EP)
    {
        case 'L':
        case 'l':
            cout<<"Roundabouts visited: ";
            cout<<"A, B, C, D, E"<<endl;
            cout<<"Total Distance traveled: "<<d<<endl;
            break;
        case 'M':
        case 'm':
            cout<<"Roundabouts visited: ";
            cout<<"B, C, D, E"<<endl;
            d=d-4;
            cout<<"Total Distance traveled: "<<d<<endl;
            break;
        case 'N':
        case 'n':
            cout<<"Roundabouts visited: ";
            cout<<"C, D, E"<<endl;
            d=d-6;
            cout<<"Total Distance traveled: "<<d<<endl;
            break;
        case 'O':
        case 'o':
            cout<<"Roundabouts visited: ";
            cout<<"D, E"<<endl;
            d=d-9;
            cout<<"Total Distance traveled: "<<d<<endl;
            break;
        case 'P':
        case 'p':
            cout<<"Roundabouts visited: ";
            cout<<"E"<<endl;
            d=d-10;
            cout<<"Total Distance traveled: "<<d<<endl;
            break;
        default:
            cout<<"Invalid Entry Point"<<endl;
            break;
    }
	return 0;
}
