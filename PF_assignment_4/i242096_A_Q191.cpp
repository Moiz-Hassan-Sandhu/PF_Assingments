//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i=0, j=0, set1, set2; 
	cout<<"+------+"<<endl;
	while(i<=2)
	{
    	set1=3;
    	set2=1;
    	while(j<3)
    	{
        	cout<<"|";
        	cout<<setw(set1)<<"^"<<setw(set2)<<"^"<<setw(set1);
        	set1--;
        	set2=set2+2;
        	j++;
        	cout<<"|"<<endl;
    	}
    	i++;
	}
	i=0, j=0;
	while(i<=2)
	{
    	set1=3;
    	set2=1;
    	while(j<3)
    	{
        	cout<<"|";
        	cout<<setw(set1)<<"^"<<setw(set2)<<"^"<<setw(set1);
        	set1--;
        	set2=set2+2;
        	j++;
        	cout<<"|"<<endl;
    	}
    	i++;
	}
	i=0, j=0;
	cout<<"+------+"<<endl;
	while(i<=2)
	{
    	set1=1;
    	set2=5;
    	while(j<3)
    	{
        	cout<<"|";
        	cout<<setw(set1)<<"v"<<setw(set2)<<"v"<<setw(set1);
        	set1=set1+1;
        	set2=set2-2;
        	j++;
        	cout<<"|"<<endl;
    	}
    	i++;
	}
	i=0, j=0;
	while(i<=2)
	{
    	set1=1;
    	set2=5;
    	while(j<3)
    	{
        	cout<<"|";
        	cout<<setw(set1)<<"v"<<setw(set2)<<"v"<<setw(set1);
        	set1+=1;
        	set2=set2-2;
        	j++;
        	cout<<"|"<<endl;
    	}
	    i++;
	}
	cout<<"+------+"<<endl;
    return 0;
}
