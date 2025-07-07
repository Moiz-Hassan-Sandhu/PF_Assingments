#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//24i2096 Moiz Hassan CY A
int main()
{
    int type, solution, prob;
    srand(time(NULL));
    prob=(rand()%100)+1;
    cout<<"______Attack Types_____"<<endl
        <<"1 for DoS Denial of Service attack"<<endl
        <<"2 for Phishing attack"<<endl
        <<"3 for Malware attack"<<endl
        <<"4 for SQL Injection attack"<<endl
        <<"5 for Man-in-the-Middle attack"<<endl
        <<"6 for Exit (Terminate Program)"<<endl;
    cout<<"Enter Attack Type: ";
    cin>>type;
    cout<<endl;

    switch(type)
    {
        case 1:
            cout<<"______DoS attack solutions______"<<endl
                <<"1 for Simulate throttling network traffic"<<endl
                <<"2 for Block the attacker's IP"<<endl
                <<"3 for Verify normal traffic has resumed"<<endl;
            cout<<"Enter solution: ";
            cin>>solution;
            cout<<endl;
            switch(solution)
            {
            case 1:
                cout<<"Simulating throttling network traffic..."<<endl;
                break;
            case 2:
                cout<<"Blocking the attacker's IP..."<<endl;
                break;
            case 3:
                cout<<"Verifing normal traffic has resumed..."<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
            }
        	if(prob==100)
    		{
        		cout<<"The Attack is successfully mitigated"<<endl;
    		}
    		else if((prob>=0)&&(prob<100))
    		{
        		cout<<"The Attack is not successfully mitigated"<<endl;
        		cout<<"Respond again with a new strategy"<<endl;
    		}
        	break;
        case 2:
            cout<<"______Phishing attack solutions______"<<endl
                <<"1 for Flag suspicious emails"<<endl
                <<"2 for Warn users about the phishing attempt"<<endl
                <<"3 for Log the attempt for further investigation"<<endl;
            cout<<"Enter solution: ";
            cin>>solution;
            cout<<endl;
            switch(solution)
            {
                case 1:
                    cout<<"Flagging suspicious emails..."<<endl;
                    break;
                case 2:
                    cout<<"Warning the users about the phishing attempt..."<<endl;
                    break;
                case 3:
                    cout<<"Loging the attempt for further investigation..."<<endl;
                    break;
                default:
                    cout<<"Invalid input"<<endl;
                    break;
            }
            if(prob==100)
    		{
        		cout<<"The Attack is successfully mitigated"<<endl;
    		}
    		else if((prob>=0)&&(prob<100))
    		{
        		cout<<"The Attack is not successfully mitigated"<<endl;
        		cout<<"Respond again with a new strategy"<<endl;
    		}
        	break;
        case 3:
            cout<<"_____Malware attack solutions______"<<endl;
            cout<<"1 for Run a virtual sandbox to isolate the malware"<<endl
                <<"2 for Report the malware's behavior"<<endl
                <<"3 for Identify if it is ransomware, spyware, or a virus, and respond accordingly"<<endl;
            cout<<"Enter solution: ";
            cin>>solution;
            cout<<endl;
        	switch(solution)
            	{
                    case 1:
                        cout<<"Running a virtual sandbox to isolate the malware..."<<endl;
                        break;
                    case 2:
                        cout<<"Reporting the malware's behavior..."<<endl;
                        break;
                    case 3:
                        cout<<"Identifying if it is ransomware, spyware, or a virus..."<<endl;
                        break;
                    default:
                        cout<<"Invalid input"<<endl;
                }
            if(prob==100)
    		{
        		cout<<"The Attack is successfully mitigated"<<endl;
    		}
    		else if((prob>=0)&&(prob<100))
    		{
        		cout<<"The Attack is not successfully mitigated"<<endl;
        		cout<<"Respond again with a new strategy"<<endl;
    		}
            break;
        case 4:
            cout<<"_____SQL Injection attack solutions______"<<endl
                <<"1 for Apply prepared statments to all database queries"<<endl
                <<"2 for Log the malicious query attempt"<<endl
                <<"3 for Simulate alerting the database administrator"<<endl;
           	cout<<"Enter solution: ";
            cin>>solution;
            cout<<endl;
            switch(solution)
                {
                    case 1:
                        cout<<"Applying prepared statements to all database queries..."<<endl;
                        break;
                    case 2:
                        cout<<"Loging the malicious query attempt..."<<endl;
                        break;
                    case 3:
                        cout<<"Simulating alerting the database administrator..."<<endl;
                        break;
                    default:
                        cout<<"Invalid input"<<endl;
                        break;
                }
     		if(prob==100)
    		{
        		cout<<"The Attack is successfully mitigated"<<endl;
    		}
    		else if((prob>=0)&&(prob<100))
    		{
        		cout<<"The Attack is not successfully mitigated"<<endl;
        		cout<<"Respond again with a new strategy"<<endl;
    		}
        	break;
        case 5:
            cout<<"_____Man-in-the-Middle attack solutions______"<<endl
                <<"1 for Detect network anomalies"<<endl
                <<"2 for Reroute traffic through a secure channel (SSL)"<<endl
                <<"3 for Log all rerouted traffic for security audits"<<endl;
            cout<<"Enter solution: ";
            cin>>solution;
            cout<<endl;
            switch(solution)
            {
                case 1:
                    cout<<"Detecting network anomalies..."<<endl;
                    break;
                case 2:
                    cout<<"Rerouting traffic through a secure channel (SSL)..."<<endl;
                    break;
                case 3:
                    cout<<"Loging all rerouted traffic for security audits..."<<endl;
                    break;
                default:
                    cout<<"Invalid input"<<endl;
                    break;
            }
    		if(prob==100)
    		{
        		cout<<"The Attack is successfully mitigated"<<endl;
    		}
    		else if((prob>=0)&&(prob<100))
    		{
        		cout<<"The Attack is not successfully mitigated"<<endl;
        		cout<<"Respond again with a new strategy"<<endl;
    		}
	    	break;
	    
    	case 6:
        	cout<<"Terminating Program"<<endl;
        break;
        
        default:
            cout<<"Invalid input"<<endl;
    }
return 0;
}
