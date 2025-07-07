#include<iostream>
#include<string>
using namespace std;
//24i2096 Moiz Hassan CY A
int main()
{
    string SIP;
    string DIP;
    string protocol;
    unsigned int PS, FNA;
    
    cout<<"Enter the Source IP Address: ";
    getline(cin, SIP);
    
    cout<<"Enter the Destination IP Address: ";
    getline(cin, DIP);

    cout<<"Enter the Packet Size (bytes): ";
    cin>>PS;
    cin.ignore();
    cout<<endl;

    cout<<"Input is case sensitive"<<endl
        <<"_____Protocols_____"<<endl
        <<"HTTP"<<endl
        <<"HTTPS"<<endl
        <<"FTP"<<endl
        <<"SSH"<<endl
        <<"DNS"<<endl
        <<"SMTP"<<endl;
    cout<<"Enter the Protocol: ";
    getline(cin, protocol);

    cout<<"Enter the Failed Number of Attempts: ";
    cin>>FNA;
    cout<<endl;

    if(FNA>5)
    {
        cout<<"Highly Malicious"<<endl;
    }
    else if((PS>10000)&&(protocol=="HTTP"))
    {
        cout<<"Highly Malicious"<<endl;
    }
    else if((SIP=="192.168.0.0")||(SIP=="192.168.0.1")||(SIP=="192.168.0.2")||(SIP=="192.168.0.3")||(SIP=="192.168.0.4")||(SIP=="192.168.0.5")||(SIP=="192.168.0.6")||(SIP=="192.168.0.7")||(SIP=="192.168.0.8")||(SIP=="192.168.0.9"))
    {
        cout<<"Highly Malicious"<<endl;
    }
    else if((SIP=="10.0.0.0")||(SIP=="10.0.1.1")||(SIP=="10.0.2.2")||(SIP=="10.0.3.3")||(SIP=="10.0.4.4")||(SIP=="10.0.5.5")||(SIP=="10.0.6.6")||(SIP=="10.0.7.7")||(SIP=="10.0.8.8")||(SIP=="10.0.9.9"))
    {
        cout<<"Highly Malicious"<<endl;
    }
    else if(((protocol=="FTP")||(protocol=="SSH"))&&(PS>5000))
    {
        cout<<"Pottentially Malicious"<<endl;
    }
    else if((protocol=="DNS")&&((DIP=="8.8.8.8")||(DIP=="8.8.4.4")))
    {
        cout<<"Pottentially Malicious"<<endl;
    }
    else if((FNA>=3)&&(FNA<=5))
    {
        cout<<"Pottentially Malicious"<<endl;
    }
    else
    {
        cout<<"Safe (Low Risk)"<<endl;
    }
	return 0;
}
