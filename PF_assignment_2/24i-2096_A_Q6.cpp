#include<iostream>
using namespace std;
int main()
{
	//Moiz Hassan i242096 CY-A
	int color, v, i, b, g, y, o, r;
	cout<<"Enter the number for colors: ";
	cin>>color;
	v=(1<<0);	//if 0th bit is 1 then it will output 
	i=(1<<1);	//if 1st bit is 1 then it will output 
	b=(1<<2);	//if 2nd bit is 1 then it will output 
	g=(1<<3);	//if 3rd bit is 1 then it will output
	y=(1<<4);	//if 4th bit is 1 then it will output
	o=(1<<5);	//if 5th bit is 1 then it will output
	r=(1<<6);	//if 6th bit is 1 then it will output
	
	if(color&v)
	{
		cout<<"Voilet";
	}
	if(color&i)
	{
		cout<<"Indigo";
	}
	if(color&b)
	{
	cout<<"Blue";}
	if(color&g)
	{	
		cout<<"Green";}
	if(color&y)
	{
		cout<<"Yellow";}
	if(color&o)
	{
		cout<<"Orange";}
	if(color&r)
	{
		cout<<"Red";}
}
