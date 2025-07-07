//i242096 Moiz Hassan CY A assignment#5
#include<iostream>
using namespace std;
//function declaration
bool MyIsAlpha(char);
bool MyIsDigit(char);
bool MyIsLower(char);
bool MyIsUpper(char);
char MyConvertUpper(char);
char MYConvertLower(char);
bool Myisxdigit(char);
bool Myisprint(char);
bool Myispunct(char);
bool Myisspace(char);
//main function
int main()
{
    char x;
    cout<<"Enter a character: ";
    cin.get(x);
    cin.ignore();
    cout<<"Is Alfabet: "<<MyIsAlpha(x)<<endl;
    cout<<"Is Digit: "<<MyIsDigit(x)<<endl;
    cout<<"Is Lowercase: "<<MyIsLower(x)<<endl;
    cout<<"Is uppercase: "<<MyIsUpper(x)<<endl;
    cout<<"Converted to uppercase: "<<MyConvertUpper(x)<<endl;
    cout<<"Converted to lowercase: "<<MYConvertLower(x)<<endl;
    cout<<"Is Hexadecimal: "<<Myisxdigit(x)<<endl;
    cout<<"Is Printable: "<<Myisprint(x)<<endl;
    cout<<"Is Punctuation: "<<Myispunct(x)<<endl;
    cout<<"Is Space: "<<Myisspace(x)<<endl;
    return 0;
}
bool MyIsAlpha(char x)
{
    if((x>=65&&x<=90)||(x>=97&&x<=122))
    {
        return 0;
    }
    return 1;
}
bool MyIsDigit(char x)
{
    if(x>=48&&x<=57)
    {
        return 0;
    }
    return 1;
}
bool MyIsLower(char x)
{
    if(x>=97&&x<=122)
    {
        return 0;
    }
    return 1;
}
bool MyIsUpper(char x)
{
    if(x>=65&&x<=90)
    {
        return 0;
    }
    return 1;
}
char MyConvertUpper(char x)
{
    if(!(MyIsLower(x)))
    {
        x=x-32;
        return x;
    }
    return x;
}
char MYConvertLower(char x)
{
    if(!(MyIsUpper(x)))
    {
        x=x+32;
        return x;
    }
    return x;

}
bool Myisxdigit(char x)
{
    if((x>=65&&x<=90)||(x>=97&&x<=122)||(x>=48&&x<=57))
    {
        return 0;
    }
    return 1;
}
bool Myisprint(char x)
{
    if(x>=32&&x<=126)
    {
        return 0;
    }
    return 1;
}
bool Myispunct(char x)
{
    if(x=='.'||x==','||x=='?'||x==';'||x==':'||x==27||x=='('||x==')'||x=='"'||x=='-')
    {
        return 0;
    }
    return 1;
}
bool Myisspace(char x)
{
    if(x==32)
    {
        return 0;
    }
    return 1;
}
