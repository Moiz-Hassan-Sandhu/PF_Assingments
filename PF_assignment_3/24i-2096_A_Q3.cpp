#include<iostream>
#include<string>
using namespace std;
//24i2096 Moiz Hassan CY A
int main()
{
    int SL;    //severity level
    string AT; //AT: attack type
	string TDT; //Targeted Data Type
    
    cout<<"!!!! Carefully Enter! fields are case sensitive!!!!"<<endl;
    
    //Input Attack Type
    cout<<"______ATTACK TYPE_____"<<endl
        <<"DDos"<<endl
        <<"Phishing"<<endl
        <<"Malware"<<endl
        <<"SQL Injection"<<endl
        <<"Ransomware"<<endl
        <<"Cross-Site Scripting"<<endl
        <<"Man-in-the-Middle"<<endl
        <<"Credentials Stuffing"<<endl
        <<"Zero Day Exploit"<<endl
        <<"Inside Threat"<<endl
        <<"_____________________"<<endl;
    cout<<"Enter the attack type: ";
    getline(cin, AT);
    cout<<endl;
    
    //Input Severity Level
    cout<<"_____SEVERITY LEVEL_____"<<endl
        <<"From 1 to 5"<<endl
        <<"_____________________"<<endl;
    cout<<"Enter the Severity Level: ";
    cin>>SL;
    cin.ignore();
    cout<<endl;
    
    //Intput Target Data Type
    cout<<"______TARGETED DATA TYPE______"<<endl
        <<"Personal"<<endl
        <<"Financial"<<endl
        <<"Healthcare"<<endl
        <<"Intellectual Property"<<endl
        <<"Corporate Secrets"<<endl
        <<"User Credentials"<<endl
        <<"_____________________"<<endl;
    cout<<"Enter the Targeted Data Type: ";
    getline(cin, TDT);
    cout<<endl;
    
    
    if(((SL<1)||(SL>5))||((AT!="DDos")&&(AT!="Phishing")&&(AT!="Malware")&&(AT!="SQL Injection")&&(AT!="Ransomware")&&(AT!="Cross-Site Scripting")&&(AT!="Man-in-the-Middle")&&(AT!="Credentials Stuffing")&&(AT!="Zero Day Exploit")&&(AT!="Inside Threat"))||((TDT!="Personal")&&(TDT!="Financial")&&(TDT!="Healthcare")&&(TDT!="Intellectual Property")&&(TDT!="Corporate Secrets")&&(TDT!="User Credentials")))
    {								//Check if the inputs are out of range or format
        cout<<"ERROR!"<<endl;		//ture then output error
    }
    else if((AT=="DDos")&&((SL==4)||(SL==5)))	//checking on differnt ranges, attack and data types
    {
        cout<<"Critical Network Threat"<<endl;
    }
    else if((AT=="Phishing")&&(TDT=="Financial"))
    {
        cout<<"High Risk of Fraud"<<endl;
    }
    else if((AT=="Malware")&&(SL>=3))
    {
        cout<<"Potential Data Breach"<<endl;
    }
    else if((AT=="SQL Injection")&&((SL==4)||(SL==5)))
    {
        cout<<"Database Compromise"<<endl;
    }
    else if(AT=="Ransomware")
    {
        cout<<"Critical threat to data integrity"<<endl;
    }
    else if((AT=="Cross-Site Scripting")&&(SL>=3))
    {
        cout<<"Web Application Vulnerability"<<endl;
    }
    else if((AT=="Man-in-the-Middle")&&(TDT=="User Credentials"))
    {
        cout<<"Critical Credential Theft"<<endl;
    }
    else if((AT=="Credentials Stuffing")&&((SL==4)||(SL==5)))
    {
        cout<<"Severe Account Takeover Risk"<<endl;
    }
    else if(AT=="Zero Day Exploit")
    {
        cout<<"Imidiate patch required"<<endl;
    }
    else if((AT=="Inside Threat")&&(SL==5))
    {
        cout<<"Critical Internal Breach"<<endl;
    }
    else									//ranges, attack types, or data types, other then specified
    {										//output Unkown threat level
        cout<<"Unknown Threat Level"<<endl;
    }
    return 0;
}
