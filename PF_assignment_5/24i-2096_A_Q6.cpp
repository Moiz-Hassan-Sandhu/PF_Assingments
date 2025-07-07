//i242096 Moiz Hassan CY A assignment#5
#include<iostream>
using namespace std;
//function declaration
char encryptChar(char, char);
void encryption();
char decryptChar(char, char);
void decryption();
void communicationSystem();
//main function
int main() 
{
    communicationSystem();
    return 0;
}
char encryptChar(char messageChar, char keywordChar)
{
    int temp1=0;
    int temp2=messageChar; 
    char temp3;

    if(messageChar!='\0'&&keywordChar=='\0') 
    {
        keywordChar=0;
    }
    if(keywordChar>='A'&&keywordChar<='Z')
    {
        temp1=keywordChar-64;
    }
    if(keywordChar>='a'&&keywordChar<='z') 
    {
        temp1=keywordChar-96;
    }
    temp2=temp2+temp1;
    if(temp2>122&&keywordChar>='a'&&keywordChar<='z') 
    {
        temp2=temp2%122;
        temp2=temp2+96;
    }
    else if(temp2>90&&keywordChar>='A'&&keywordChar<='Z')
    {
        temp2=temp2%90;
        temp2+=64;
    }
    temp3=temp2;
    return temp3;
}
void encryption() 
{
    int i=0;
    int j=0;
    char message[100];
    cout<<"Enter the massage: ";
    cin>>message;
    char key[100];
    cout<<"Enter the key: ";
    cin>>key;
    while(message[i]!='\0')
    {
        char encryptedChar=encryptChar(message[i], key[j]);
        i++;
        j++;
        if(key[j]=='\0') 
        {
            j=0;
        }
        cout<<encryptedChar;
    }
    cout<<endl;  
}
char decryptChar(char encryptedChar, char keywordChar)
{
    int temp1=0;
    int temp2=encryptedChar; 
    char temp3;

    if(encryptedChar!='\0'&&keywordChar=='\0') 
    {
        keywordChar=0;
    }
    if(keywordChar>='A'&&keywordChar<='Z')
    {
        temp1=keywordChar-64;
    }
    if(keywordChar>='a'&&keywordChar<='z') 
    {
        temp1=keywordChar-96;
    }
    temp2=temp2-temp1;
    if (temp2<97&&keywordChar>='a'&&keywordChar<= 'z') 
    {
        temp2=122-(96-temp2);
    }
    else if(temp2<65&&keywordChar>='A'&&keywordChar<='Z')
    {
        temp2=90-(64-temp2);
    }
    temp3=temp2;
    return temp3;
}
void decryption() 
{
    int i=0;
    int j=0;
    char encryptedMessage[100];
    cout<<"Enter the Encrypted Massage: ";
    cin>>encryptedMessage;
    char key[100];
    cout<<"Enter the to Dycrypt Key: ";
    cin>>key;
    cout<<"Decrypted Message: ";
    while(encryptedMessage[i]!='\0') 
    {
        char decryptedChar=decryptChar(encryptedMessage[i], key[j]);
        i++;
        j++;
        if(key[j]=='\0') 
        {
            j=0;
        }
        cout<<decryptedChar;
    }
    cout<<endl;  
}
void communicationSystem()
{
    int choice;
    cout<<"----Menu----"<<endl
    <<"Press 1 for Encryption"<<endl
    <<"Press 2 for Decryption"<<endl;
    cin>>choice;
    if (choice==1)
    {
        encryption(); 
    }
    if(choice==2)
    {
        decryption();
    }
}
