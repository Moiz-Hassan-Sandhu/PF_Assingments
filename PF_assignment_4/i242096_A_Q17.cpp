//i242096 Moiz Hassan CY A assignment#4
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number to repeat the sequence: ";
	cin>>num;
	cout<<endl;
	int totalNum=num*10,i = 1, j = 1;
	
	while(i<=totalNum)
	{
		while(j <= 40)
		{
			if(j%10 == 0) cout << "|";
			else cout << " " ;
			if(j == 40) cout << endl;
			j++;
		}

		cout << i%10;
		if(i%40 == 0) cout << endl;
		i++;
	}
	return 0;
}
