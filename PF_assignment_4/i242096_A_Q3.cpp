//i242096 Moiz Hassan CY A assignment#2
#include<iostream>
using namespace std;
int main()
{
    int a, k, b, sum;
    char choice;
    do{
        cout<<"Enter the 1st number: ";
        cin>>a;
    	k=a;
		cout<<"Enter the 2nd number: ";
        cin>>b;
        if(a<b)
        {
        	sum=0;
        	while(a<=b)
        	{
        		sum=sum+a;
        		a++;
			}
			a=k;
			cout<<"Sum of integer values from "<<a<<" to "<<b<<" ="<<sum<<endl;
		}
		else
		{
			cout<<"Ivalid Input!!"<<endl
				<<"1st number should be samller than the 2nd number"<<endl;
		}
		cout<<"Enter y/Y to continue otherwise press any other charachter to end program: ";
		cin>>choice;
	}while(choice=='Y'||choice=='y');
	return 0;
}
