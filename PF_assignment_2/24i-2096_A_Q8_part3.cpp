#include <iostream>
using namespace std;
int main() 
{
	//i242096 Moiz Hassan CY A
    int a;
	char al, ar;
	cout<<"Enter a 8 bit number (0-255): ";
	cin>>a;
	al=(unsigned char)((a<<3)|(a>>5)); //left rotation by taking OR of the left shif and right shift
	ar=(unsigned char)((a>>3)|(a<<5)); //Right rotation by taking OR of the left shif and right shift
	a=(unsigned char)(al^ar); //XOR for enchryption 
	cout<<"Result after combining rotations: "<<a;
}
