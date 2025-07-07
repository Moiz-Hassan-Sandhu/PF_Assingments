//i242096 Moiz Hassan CY A assignment#2
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double cels, cele, far;
    char choice;
    do{
        cout<<"Enter the starting temprature in Celcius: ";
        cin>>cels;
        cout<<"Enter the ending temprature in Celcius: ";
        cin>>cele;
        if(cels<cele)
        {
            cout<<"Celcius"<<setw(20)<<"Farenhite"<<endl
                <<"-----------------------------"<<endl;
            while(cels<=cele)
            {
                far= cels*9/5 + 32;
                cout<<setw(5)<<cels<<setw(8)<<"|"<<setw(11)<<far<<endl;
                cels++;
            }
        }
        else
        {
            cout<<"Invaild Input!!"<<endl;
            cout<<"The starting temprature should be smaller than the ending temprature "<<endl;
        }
        cout<<"Enter y/Y to continue otherwise press any other charachter to end program: ";
		cin>>choice;
    }while(choice=='Y'||choice=='y');
    return 0;
}
