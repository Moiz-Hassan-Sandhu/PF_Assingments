//i242096 Moiz Hassan CY A assignment#5
#include<iostream>
using namespace std;
//function declaration
bool isPortOpen(unsigned short);
void checkPort(unsigned short);
//main fuction
int main()
{
    unsigned short port;    //declaring unsigned int to input number from range 0 to 65535
    cout<<"Enter the Port number: ";
    cin>>port;
    checkPort(port);        //calling the checker function
}
void checkPort(unsigned short port) 
{   
    if(isPortOpen(port)==true)  //checking the condition function return value
    {
        cout<<"Port "<<port<<" is open";    //if true then print
    }
    else
    {
        cout<<"Port "<<port<<" is closed";  //if false then print
    }

}
bool isPortOpen(unsigned short port)
{
    if((port>=80&&port<=90)||(port==443))   //checking if the required port is open or closed
    {
        return true;                        //if open then return true
    }
    return false;                           //if closed then return false
}