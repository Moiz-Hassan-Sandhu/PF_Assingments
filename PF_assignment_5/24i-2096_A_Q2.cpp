//i242096 Moiz Hassan CY A assignment#5
#include<iostream>
#include<string>
using namespace std;
//fucntions declaration
bool validateUsername(char[]);
bool validatePassword(char[]);
void loginSystem();
//main fuction
int main()
{
	loginSystem(); //calling the login system fuction
}
//Fuction for Username Validation 
bool validateUsername(char name[])
{
	char t_name[6]={'a','d','m','i','n','\0'};	//true username
	bool a;
	//checking if each charahter of input array matches with ture array
	if(name[i]==t_name[i])
	{
		a=true;		//if true then return ture
	}
	else
	{
		a=false;	
	}
	return a;
}
//Function for Password Validation
bool validatePassword(char password[])
{
	char t_pass[9]={'a','d','m','i','n','1','2','3','\0'};	//array containing true password
	bool b;
	//checking if each charahter of input array matches with ture array
	if((password[0]==t_pass[0])&&(password[1]==t_pass[1])&&(password[2]==t_pass[2])&&(password[3]==t_pass[3])&&(password[4]==t_pass[4])&&(password[5]==t_pass[5])&&(password[6]==t_pass[6])&&(password[7]==t_pass[7])&&(password[8]==t_pass[8]))
	{
		b=true;		//if ture then return true
	}
	else
	{
		b=false;	//if false then return false
	}
	return b;
}
int i=1; //making it global because if I write it inside the fuction it will not be increamented, it would always reinitialize as i=1
//Fuction for taking inputs and calling validation fuctions
void loginSystem()
{
	bool a, b;	
	char name[30]={'\0'};
	char password[30]={'\0'};
	//taking inputs
	cout<<"Enter the Username: ";
	cin.get(name, 30);
	cin.ignore();
	cout<<"Enter the Password: ";
	cin.get(password, 30);
	cin.ignore();
	//Calling validation fuctions
	a=validateUsername(name);
	b=validatePassword(password);
	if(a==1&&b==1)		//Checking if Username and Password is Correct
	{
		cout<<"Login Successfull";	//ture then print
	}
	else if(i>=3)		//checking if the number of attemts reached three
	{
		cout<<"Too many attempts, You are locker!";		//print after 3 incorrect attemts
	}
	else if(a==0||b==0)	//Checking if Username or Password is Incorrect
	{
		i++;			//Number of attempts counter 
		loginSystem();	//calling input fuction 
	}
	else
	{
		cout<<endl;
		cout<<"Error";
	}	
}
