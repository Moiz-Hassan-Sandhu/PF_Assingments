#include<iostream>
using namespace std;
int main()
{
	int i, j;
	for(i=0; i<=6; i++)     //outer loop
	{
		cout<<"#";			//prints # on biginning of every line
		for(j=1; j<=i;j++)
		{
			cout<<" ";		//print spaces while j is not equal i
			if(j==i)		//if j equal i
			{
			cout<<"#";		//then prints #
			}
		}
		cout<<endl;
	}
	return 0;
}
