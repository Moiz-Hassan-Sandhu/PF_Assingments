//i242096 Moiz Hassan CY A assignment#5
#include<iostream>
using namespace std;
//function declaration
//sum
int sum(int, int);
float sum(float, float);
double sum(double, double);
//difference
int diff(int, int);
float diff(float, float);
double diff(double, double);
//Multiply
int prod(int,  int);
float prod(float, float);
double prod(double, double);
//Division
int div(int, int);
float div(float, float);
double div(double, double);
//power
int pow(int, int);
float pow(float, float);
//main funtion
int main()
{	
	//variable declaration
	int int_a, int_b;
	float float_a, float_b;
	double double_a, double_b;
    int op;		//operation
    int dt;		//data type
    cout<<"-----Menu-----"<<endl
        <<"Press 1 for addtion"<<endl
        <<"Press 2 for Difference"<<endl
        <<"Press 3 for Multiplication"<<endl
        <<"Press 4 for Division"<<endl
        <<"Press 5 for Power"<<endl;
    //input operation
    cout<<"Enter the choice: ";
    cin>>op;
    //input data type
    cout<<"-----Menu----"<<endl
    	<<"Press 1 for int"<<endl
    	<<"Press 2 for float"<<endl
    	<<"Press 3 for double"<<endl;
    cout<<"Enter the data type: ";
    cin>>dt;
    switch(dt)	//checks the data type for taking input
    {
    	case 1:		//int data type
    		{
    			cout<<"Enter 1st num: ";
    			cin>>int_a;
    			cout<<"Enter the 2nd number: ";
    			cin>>int_b;
    			break;
			}
		case 2:		//float data type
			{
				cout<<"Enter 1st num: ";
    			cin>>float_a;
    			cout<<"Enter the 2nd number: ";
    			cin>>float_b;
    			break;
			}
		case 3:		//double data type
			{
				double a, b;
				cout<<"Enter 1st num: ";
    			cin>>double_a;
    			cout<<"Enter the 2nd number: ";
    			cin>>double_b;
    			break;
			}
		}
    switch (op)		//checks the operation
    {
        case 1:		//sum
        {
            if(dt==1)
            {
                cout<<"Sum: "<<sum(int_a, int_b);
            }
            else if(dt==2)
            {
                cout<<"Sum: "<<sum(float_a, float_b);
            }
            else if (dt==3)
            {
                cout<<"Sum: "<<sum(double_a, double_b);
            }
            else
            {
                cout<<"Error";
            }
            break;
        }
        case 2:		//difference
        {
            if(dt==1)
            {
                cout<<"Difference: "<<diff(int_a, int_b);
            }
            else if(dt==2)
            {
                cout<<"Difference: "<<diff(float_a, float_b);
            }
            else if (dt==3)
            {
                cout<<"Difference: "<<diff(double_a, double_b);
            }
            else
            {
                cout<<"Error";
            }
            break;
        }
        case 3:		//product
        {
            if(dt==1)
            {
                cout<<"Product: "<<prod(int_a, int_b);
            }
            else if(dt==2)
            {
                cout<<"Product: "<<prod(float_a, float_b);
            }
            else if (dt==3)
            {
                cout<<"Product: "<<prod(double_a, double_b);
            }
            else
            {
                cout<<"Error";
            }
            break;
        }
        case 4:		//division
        {
            if(dt==1)
            {
                cout<<"Division: "<<div(int_a, int_b);
            }
            else if(dt==2)
            {
                cout<<"Division: "<<div(float_a, float_b);
            }
            else if (dt==3)
            {
                cout<<"Division: "<<div(double_a, double_b);
            }
            else
            {
                cout<<"Error";
            }
            break;
        }
        case 5:		//power
        {
            if(dt==1)
            {
                cout<<"Power: "<<pow(int_a, int_b);
            }
            else if(dt==2)
            {
                cout<<"Power: "<<pow(float_a, float_b);
            }
            else if(dt==3)
            {
            	cout<<"Cannot opperate power fuction on double data type";
			}
            {
                cout<<"Error";
            }
            break;
        }
        default:
        	{
        		cout<<"Invalid operation";
            	break;
			}
    }
    return 0;
}
int sum(int a , int b)	//calculate int sum
{
    return a+b;
}
float sum(float a, float b)		//caltlate float sum
{
    return a+b;
}
double sum(double a, double b)		//calculate double sum
{
    return a+b;
}
int diff(int a, int b)	//calculate int difference
{
    return a-b;
}
float diff(float a, float b)		//caltlate float difference
{
    return a-b;
}
double diff(double a, double b)		//calculate double difference
{
    return a-b;
}
int prod(int a, int b)	//calculate int product
{
    return a*b;
}
float prod(float a, float b)		//caltlate float product
{
    return a*b;
}
double prod(double a, double b)		//calculate double product
{
    return a*b;
}
int div(int a, int b)	//calculate int division
{
    return a/b;
}
float div(float a, float b)		//caltlate float division
{
    return a/b;
}
double div(double a, double b)		//calculate double division
{
    return a/b;
}
int pow(int a, int b)	//calculate int	power
{
    int p=1;
    for(int i=1; i<=b; i++)
    {
        p=p*a;
    }
    return p;
}
float pow(float a, float b)		//caltlate float power
{
    float p=1;
    for(int i=1; i<=b; i++)
    {
        p=p*a;
    }
    return p;
}
