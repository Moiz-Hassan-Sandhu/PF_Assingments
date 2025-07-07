//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
    int n, i=1, num, max, min;
    cout<<"Enter the ammount of number u want to enter: ";
    cin>>n;
	cout<<"Enter the number: ";
    cin>>num;		//input loop counter
    min=num;		//initializing max with num 
    max=num;		//initializing min with num
    do{
        cout<<"Enter the number: ";
        cin>>num;		
        if(num>max)		//if current num is greater than current max
        {
            max=num; 	//then num will be new max
        }
        if(num<min)		//if current num is smaller than current min
        {			
            min=num;   //then num will be new min
        }
        i++;
    }while(i<=n-1);	//run loop until 1 less than loop counter
    cout<<"Maximum= "<<max<<endl;
    cout<<"Minimum= "<<min<<endl;
}
