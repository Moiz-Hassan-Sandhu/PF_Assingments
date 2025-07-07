//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i=0, j, k; 
    while(i<3)
    {
        j=0;
        while(j<7)
        {
            k=0;
            while(k<7)
            {
                if(k==j || k==7-1-j)
				{
					cout<<"*";
				}
                else
				{
					cout<<"  ";
				}
                k++;
            }
            cout<<endl;
            j++;
        }
        i++;
    }
	return 0;
}
