#include<iostream>
#include<string>
using namespace std;
//24i2096 Moiz Hassan CY A
int main()
{
	string member;
	string pcode;
	int inum, ppi, discount=0, temp;
	double total;
	cout<<"Enter the number of items: ";
	cin>>inum;
	cout<<"Enter the price per item:";
	cin>>ppi;
	total=inum*ppi;
	temp=total;
	cout<<"Total ammount before discount: "<<total<<endl;
	cout<<endl;
	cout<<"M for premium-member"<<endl
		<<"R for regular-customer"<<endl
		<<"N for non-member"<<endl;
	cout<<"Enter membership status: ";
	cin>>member;
	cout<<endl;
	cout<<"______PROMOCODES_____"<<endl
		<<"FREESHIP"<<endl
		<<"HALFOFF"<<endl
		<<"BULKORDER"<<endl
		<<"N for no promocode"<<endl;
	cout<<"Enter the promocode code if any: ";
	cin>>pcode;
	cout<<endl;
	if(total>1000)												//check if the total is greater
	{
		discount=total*10/100;									//true then 10%
		total=total-discount;
		if(total<0)
		{total=0;}
		cout<<"Total ammount after base discount: "<<total<<endl;
		if(member=="M"||member=="m")							//check if the member is premium
		{
			discount=total*15/100;								//true then 15%
			total=total-discount;			
			cout<<"Customer is Premium Member"<<endl;
			if(pcode=="FREESHIP"||pcode=="freeship")			//check for promocode
			{
				total=total-20;
				if(total<0)
				{total=0;}
				cout<<"Promocode \"FREESHIP\" "<<endl
					<<"Total ammount after discount: "<<total;
			}
			else if(pcode=="HALFOFF"||pcode=="halfoff")
			{
				if(temp>500)
				{
					total=total/2;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"HALFOFF\" is valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"HALFOFF\" is not valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="BULKORDER"||pcode=="bulkorder")
			{
				if(inum>50)
				{
					discount=total*2/10;
					total=total-discount;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"BULKORDER\" is valid"<<endl
						<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"BULKORDER\" is in-valid"<<endl
						<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="N"||pcode=="n")
			{
				cout<<"No promocode applied"<<endl
					<<"Total ammount after discount: "<<total;
			}
			else
			{
				cout<<"Invalid Input";
			}
		}
		else if(member=="R"||member=="r")						//check if the member is regular
		{
			discount= total*5/100;								//true then 5%
			total=total-discount;
			if(total<0)
			{total=0;}
			cout<<"Customer is Regular Member"<<endl;
			if(pcode=="FREESHIP"||pcode=="freeship")			//check for promocode
			{
				total=total-20;
				if(total<0)
				{total=0;}
				cout<<"Promocode \"FREESHIP\" "<<endl
					<<"Total ammount after discount: "<<total;
			}
			else if(pcode=="HALFOFF"||pcode=="halfoff")
			{
				if(temp>500)
				{
					total=total/2;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"HALFOFF\" is valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"HALFOFF\" is not valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="BULKORDER"||pcode=="bulkorder")
			{
				if(inum>50)
				{
					discount=total*2/10;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"BULKORDER\" is valid"<<endl
						<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"BULKORDER\" is in-valid"<<endl
						<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="N"||pcode=="n")
			{
				cout<<"No promocode applied"<<endl
					<<"Total ammount after discount: "<<total;
			}
			else
			{
				cout<<"Invalid Input";
			}
		}
		else if(member=="N"||member=="n")						//check if the member is non-member
		{
			cout<<"Customer is Not a Member"<<endl;
			if(pcode=="FREESHIP"||pcode=="freeship")			//check for promocode
			{
				total=total-20;
				if(total<0)
				{total=0;}
				cout<<"Promocode \"FREESHIP\" "<<endl
					<<"Total ammount after discount: "<<total;
			}
			else if(pcode=="HALFOFF"||pcode=="halfoff")
			{
				if(temp>500)
				{
					total=total/2;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"HALFOFF\" is valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"HALFOFF\" is not valid"<<endl
					<<"Total ammount after discount: "<<total;
				} 
			}
			else if(pcode=="BULKORDER"||pcode=="bulkorder")
			{
				if(inum>50)
				{
					discount=total*2/10;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"BULKORDER\" is valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"BULKORDER\" is in-valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="N"||pcode=="n")
			{
					cout<<"No promocode applied"<<endl
					<<"Total ammount after discount: "<<total;
			}
			else
			{
				cout<<"Invalid Input";
			}		
		}
		else
		{
			cout<<"Invalid Input";	
		}	
	}
	else														//if the total is less than 1000
	{
		if(member=="M"||member=="m")							//check if the member is premium
		{	
			discount=total*15/100;
			total=total-discount;
			if(total<0)
			{total=0;}
			cout<<"Customer is Premium Member"<<endl;
			if(pcode=="FREESHIP"||pcode=="freeship")			//check for promocode
			{
				total=total-20;
				if(total<0)
				{total=0;}
				cout<<"Promocode \"FREESHIP\" "<<endl
					<<"Total ammount after discount: "<<total;
			}
			else if(pcode=="HALFOFF"||pcode=="halfoff")
			{
				if(temp>500)
				{
					total=total/2;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"HALFOFF\" is valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"HALFOFF\" is not valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="BULKORDER"||pcode=="bulkorder")
			{
				if(inum>50)
				{
					discount=total*2/10;
					total=total-discount;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"BULKORDER\" is valid"<<endl
						<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"BULKORDER\" is in-valid"<<endl
						<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="N"||pcode=="n")
			{
				cout<<"No promocode applied"<<endl
					<<"Total ammount after discount: "<<total;
			}
			else
			{
				cout<<"Invalid Input";
			}
		}
		else if(member=="R"||member=="r")						//check if the member is regular
		{
			discount= total*5/100;								//true then 5%
			total=total-discount;
			if(total<0)
			{total=0;}
			cout<<"Customer is Regular Member"<<endl;
			if(pcode=="FREESHIP"||pcode=="freeship") 			//check for promocode
			{
				total=total-20;
				if(total<0)
				{total=0;}
				cout<<"Promocode \"FREESHIP\" "<<endl
					<<"Total ammount after discount: "<<total;
			}
			else if(pcode=="HALFOFF"||pcode=="halfoff")
			{
				if(temp>500)
				{
					total=total/2;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"HALFOFF\" is valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"HALFOFF\" is not valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="BULKORDER"||pcode=="bulkorder")
			{
				if(inum>50)
				{
					discount=total*2/10;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"BULKORDER\" is valid"<<endl
						<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"BULKORDER\" is in-valid"<<endl
						<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="N"||pcode=="n")
			{
				cout<<"No promocode applied"<<endl
					<<"Total ammount after discount: "<<total;
			}
			else
			{
				cout<<"Invalid Input";
			}
		}
		else if(member=="N"||member=="n")						//check if the member is non member
		{
			cout<<"Customer is Not a Member"<<endl;
			if(pcode=="FREESHIP"||pcode=="freeship")			//check for promocode
			{
				total=total-20;
				if(total<0)
				{total=0;}
				cout<<"Promocode \"FREESHIP\" is valid"<<endl
					<<"Total ammount after discount: "<<total;
			}
			else if(pcode=="HALFOFF"||pcode=="halfoff")
			{
				if(temp>500)
				{
					total=total/2;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"HALFOFF\" is valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"HALFOFF\" is not valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="BULKORDER"||pcode=="bulkorder")
			{
				if(inum>50)
				{
					discount=total*2/10;
					if(total<0)
					{total=0;}
					cout<<"Promocode \"BULKORDER\" is valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
				else
				{
					cout<<"Promocode \"BULKORDER\" is in-valid"<<endl
					<<"Total ammount after discount: "<<total;
				}
			}
			else if(pcode=="N"||pcode=="n")
			{
					cout<<"No promocode applied"<<endl
					<<"Total ammount after discount: "<<total;
			}
			else
			{
				cout<<"Invalid Input";
			}		
		}
		else
		{
			cout<<"Invalid Input";	
		}
	}	
	return 0;
}