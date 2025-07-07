//i242096 Moiz Hassan CY A assignment#5
#include<iostream>
using namespace std;
//function declaration
bool hasAccess(char[], char[]);
void checkAccess(char[], char[]);
//main function
int main()
{
    //array declaration
    char role[10]={'\0'};
    char fileType[15]={'\0'};
    //taking inputs
    cout<<"Enter the role: ";
    cin.get(role, 10);
    cin.ignore();
    cout<<"Enter the fileType: ";
    cin.get(fileType, 15);
    cin.ignore();
    checkAccess(role, fileType);    //calling fuction to check access
}
void checkAccess(char role[], char fileType[])
{
    if(hasAccess(role, fileType))   //check if the return value
    {
        cout<<"Access Granted";     //if true then grant access
    }
    else
    {
        cout<<"Access denied";      //if false then deny access
    }
}
bool hasAccess(char role[], char fileType[])
{
    bool access;
    if((role[0]=='a')&&(role[1]=='d')&&(role[2]=='m')&&(role[3]=='i')&&(role[4]=='n')&&(role[5]=='\0')) //checking if the role is admin if true then move to body else proceed
    {
        //checking if the filetype is sensitive or non-sensiitve
        if(((fileType[0]=='s')&&(fileType[1]=='e')&&(fileType[2]=='n')&&(fileType[3]=='s')&&(fileType[4]=='i')&&(fileType[5]=='t')&&(fileType[6]=='i')&&(fileType[7]=='v')&&(fileType[8]=='e')&&(fileType[9]=='\0'))||((fileType[0]=='n')&&(fileType[1]=='o')&&(fileType[2]=='n')&&(fileType[3]=='-')&&(fileType[4]=='s')&&(fileType[5]=='e')&&(fileType[6]=='n')&&(fileType[7]=='s')&&(fileType[8]=='i')&&(fileType[9]=='t')&&(fileType[10]=='i')&&(fileType[11]=='v')&&(fileType[12]=='e')&&(fileType[13]=='\0')))
        {
            access= true; //if true then return true
        }
        else
        {
            cout<<"Invalid fileType!";  //if false then print 
            access=false;               //and return false

        }
    }
    else if((role[0]=='u')&&(role[1]=='s')&&(role[2]=='e')&&(role[3]=='r')&&(role[4]=='\0'))    //checking if the role is user
    {
        //checking if the file type is sensitive
        if ((fileType[0]=='s')&&(fileType[1]=='e')&&(fileType[2]=='n')&&(fileType[3]=='s')&&(fileType[4]=='i')&&(fileType[5]=='t')&&(fileType[6]=='i')&&(fileType[7]=='v')&&(fileType[8]=='e')&&(fileType[9]=='\0'))
        {
            access=false; //if true then return false
        }
        //checking if the filtype is non-sensitve
        else if((fileType[0]=='n')&&(fileType[1]=='o')&&(fileType[2]=='n')&&(fileType[3]=='-')&&(fileType[4]=='s')&&(fileType[5]=='e')&&(fileType[6]=='n')&&(fileType[7]=='s')&&(fileType[8]=='i')&&(fileType[9]=='t')&&(fileType[10]=='i')&&(fileType[11]=='v')&&(fileType[12]=='e')&&(fileType[13]=='\0'))
        {
            access=true;  //if true then return true
        }
        else
        {
            cout<<"Invlid fileType!";   //if false then print
            access=false;               //and return false
        }   
    }
    else if((role[0]=='g')&&(role[1]=='u')&&(role[2]=='e')&&(role[3]=='s')&&(role[4]=='t')&&(role[5]=='\0'))    //checking if the role is guest
    {
        //checking if the filetype is sensitive or non-sensitive
        if(((fileType[0]=='s')&&(fileType[1]=='e')&&(fileType[2]=='n')&&(fileType[3]=='s')&&(fileType[4]=='i')&&(fileType[5]=='t')&&(fileType[6]=='i')&&(fileType[7]=='v')&&(fileType[8]=='e')&&(fileType[9]=='\0'))||((fileType[0]=='n')&&(fileType[1]=='o')&&(fileType[2]=='n')&&(fileType[3]=='-')&&(fileType[4]=='s')&&(fileType[5]=='e')&&(fileType[6]=='n')&&(fileType[7]=='s')&&(fileType[8]=='i')&&(fileType[9]=='t')&&(fileType[10]=='i')&&(fileType[11]=='v')&&(fileType[12]=='e')&&(fileType[13]=='\0')))
        {
            access=false;   //if true then return false
        }
        else
        {
            access=false;   //if false then return false
            cout<<"Invalid fileType!";  //and print
        }
    }
    else
    {
        cout<<"Invalid Role!";  //if role don't match valid roles then print
    }
    return access;
}