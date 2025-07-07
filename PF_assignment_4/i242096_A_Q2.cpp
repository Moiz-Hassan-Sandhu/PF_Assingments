//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
    int ascii=0;       //initialize with 0
    while(ascii<=127)  //run loop until 127 
    {
        cout<<(char)ascii; //type casting to print charachter of corresponding ASCII
        if(ascii%16==0)    //check if charachter in one line reach 16
        {
            cout<<endl;    //true then print in new line
        }
        ascii++;
    }
    return 0;
}
