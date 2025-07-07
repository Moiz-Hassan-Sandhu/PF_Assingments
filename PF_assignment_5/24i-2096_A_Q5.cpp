//i242096 Moiz Hassan CY A assignment#5
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//function declaration
bool validateCredentials(char[], char[]);
bool validateSecurityQuestion(char[]);
int generateOTP();
bool verifyOTP(int, int);
void mfaSystem();
//main function
int main()
{
    mfaSystem();    //calling multifactor authunticator function
}
void mfaSystem()
{
    //initialization of arrays
    char username[15]={'\0'};
    char password[15]={'\0'};
    char answer[10]={'\0'};
    //initialization of variables for OTPs
    unsigned int generatedOTP;
    unsigned int enteredOTP;
    //taking inputs
    cout<<"Enter the User Name: ";
    cin.get(username, 15);
    cin.ignore();
    cout<<"Enter the Password: ";
    cin.get(password, 15);
    cin.ignore();   
    if(validateCredentials(username, password)) //calling fuction for valdation of username and password
    {
        //if return value is true then proceed in body
        cout<<"Login Successful"<<endl;
        //Checking the predefined security question
        cout<<"--->Answer the Security Question<---"<<endl;
        //taking input
        cout<<"What is your favourite? "<<endl;
        cout<<"Answer: ";
        cin.get(answer, 10);
        cin.ignore();
        if(validateSecurityQuestion(answer))    //calling funtion for answer validation
        {
            //if return value true then proceed in body
            cout<<"Security question answered correctly."<<endl;
            generatedOTP=generateOTP();     //calling funtion to generate OTP
            cout<<"You OTP is: "<<generatedOTP<<endl;   //OTP received
            int i=1;
            //checking OTP
            while(i<=4)
            {
                //taking input
            	cout<<"Enter the OTP: ";
            	cin>>enteredOTP;
            	bool otp;
            	otp=verifyOTP(enteredOTP, generatedOTP);    //calling Function for OTP validation
            	if(otp==true)  //check the return value
            	{
            	    cout<<"OTP Verified Sucessfully"<<endl;     //if true then print
            	    break;
           	 	}
            	else if(i>=3)   //checking the nummber of incorrect attempts if greater or equal 3
            	{
             	   cout<<"Too many failed attempts!, OTP verification failed"<<endl;    //true then print
             	   break;
            	}
            	else if(otp==false)     //if return value false
            	{   
                	i++;                                    //true then increament number of attempts
                	cout<<"Incorrect OTP! Try Again"<<endl; //and print
            	}
           		else
           		{
                	cout<<"Error"<<endl;    //unexpected error
            	}
        	}
        }
        else
        {
            cout<<"Incorect Answer!";       //if answer false then print
        }
    }
    else
    {
        cout<<"Login Unsuccessful!, Incorect Username or Password"<<endl;       //if return value false then print
    }
}
bool validateCredentials(char username[], char password[])      //fuction checks username and password
{
    //if username and password matches ture username and password
    if(((username[0]=='a')&&(username[1]=='d')&&(username[2]=='m')&&(username[3]=='i')&&(username[4]=='n')&&(username[5]=='\0'))&&((password[0]=='s')&&(password[1]=='e')&&(password[2]=='c')&&(password[3]=='u')&&(password[4]=='r')&&(password[5]=='e')&&(password[6]=='1')&&(password[7]=='2')&&(password[8]=='3')&&(password[9]=='\0')))
    {
        return true;    //ture then return true
    }
    return false;       //otherwise false
}
bool validateSecurityQuestion(char answer[])    //function checks the answer
{
    //if favourite color mataches true fav color
    if((answer[0]=='b')&&(answer[1]=='l')&&(answer[2]=='u')&&(answer[3]=='e')&&(answer[4]=='\0'))
    {
        return true;   //ture then return true
    }
    return false;      //otherwise false
}
int generateOTP()      //fucntion  generate random OTP
{
    srand(time(0));     //set seed for random number : cpu current time
    int generatedOTP=0;
    int temp=0;
    for(int i=0; i<=5; i++)     //generating 6 digit randome number
    {
        temp=(rand()%10);
        generatedOTP=generatedOTP*10 +temp;
    }
    cout<<endl;
    cout<<"OTP has been sent to your registered device."<<endl;
    return generatedOTP;
}
bool verifyOTP(int enteredOTP, int generatedOTP)    //function validates OTP
{
    bool otp;
    if(enteredOTP==generatedOTP)    //check if the user entered correct OTP
    {
        otp=true;                   //if true then return ture
    }
    else
    {
        otp=false;                  //if false then return false
    }
    return otp;
}
