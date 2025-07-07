//i242096 Moiz Hassan CY A assignment#5
#include<iostream>
#include<string>
using namespace std;
//function declaration
bool isValidLenght(char[]);
bool hasUpperCase(char[]);
bool hasDigit(char[]);
bool isStrongPassword(char[]);
//main function
int main()
{
    char pass[30];                  //initializes a char array
    cout<<"Enter the password: ";
    cin.get(pass, 30);              //Input the password
    cin.ignore();
    if(isStrongPassword(pass))      //calls the funtion, and checks if the returned value is true or false
    {
        cout<<"Strong Password!!";   //if true then print
    }
    else
    {
        cout<<"Password is Not strong enough!!"; // if false then print
    }
}
bool isStrongPassword(char pass[])      //funtion for calling the fuctions to check the strenght of the password
{
    if(isValidLenght(pass) && hasUpperCase(pass) && hasDigit(pass))  //call all the fuctions and checks if the return values
    {
        return true;        //if all true then return true
    }
    return false;           //if any of these is false return false
}
bool isValidLenght(char pass[])         //function checks length of the password
{
    int c=0;                            //counter for the number of digits in password
    for(int i=1; pass[i]!='\0'; i++)    //loop runs till the null charachter
    {
        c++;                            //increment for every digit
    }
    return (c>=8);                      //condition return true if length greater or equal 8
}
bool hasUpperCase(char pass[])          //function checks if password has uppercase letter
{
    for(int i=1; pass[i]!='\0'; i++)    //loop runs untill null charachter
    {
        if(pass[i]>=65 && pass[i]<=90)  //condtion checks the assci range of uppercase letters
        {
            return true;                //if true has uppercase then return true
        }
    }
    return false;                       //if false ! has uppercase then return false
}
bool hasDigit(char pass[])              //function checks if password has a digit
{
    for(int i=1; pass[i]!='\0'; i++)    //loop runs untill null charachter
    {
        if(pass[i]>=48 && pass[i]<=57)  //condtion checks the assci range of 0 to 9 charachters
        {
            return true;                //if true has a digit then return true
        }
    }
    return false;                       //if false ! has a digit then return false
}
