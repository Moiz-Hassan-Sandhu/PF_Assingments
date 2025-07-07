#include<iostream>
using namespace std;
//24i2096 Moiz Hassan CY A
int main()
{
    char choice;
    int choice1;
    cout<<"______Main Menu______"<<endl
        <<"A for Admin"<<endl
        <<"D for Editor"<<endl
        <<"V for Viewer"<<endl
        <<"G for Guest"<<endl
        <<"E for Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 'A':
        case 'a':
            cout<<"____User Menu____"<<endl
                <<"1 for Add user"<<endl
                <<"2 for Remove user"<<endl
                <<"3 for View All User"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice1;
            switch(choice1)
            {   
                case 1: 
                    cout<<"Add user"<<endl;
                    break;
                case 2:
                    cout<<"Remove user"<<endl;
                    break;
                case 3: 
                    cout<<"View All user"<<endl;    
                    break;
                default:
                    cout<<"Invalid choice"<<endl;
            }
            break;
        case 'D':
        case 'd':
            cout<<"____Editor Menu____"<<endl
                <<"1 for Edit content"<<endl
                //<<"2 for Publish content"<<endl
                <<"3 for View publihed content"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice1;
            switch(choice1)
            {
                case 1:
                    cout<<"Edit content"<<endl;
                    break;
                //case 2:
                    //cout<<"Publish Content"<<endl;
                    //break;
                case 3:
                    cout<<"View Published content"<<endl;
                    break;
                default:
                    cout<<"Invalid choice"<<endl;
                    break;
            }
            break;
        case 'V':
        case 'v':
            cout<<"____Viewer Menu____"<<endl
                <<"1 for View content"<<endl
                <<"2 for Leave Feedback"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice1;
            switch(choice1)
            {
                case 1: 
                    cout<<"View content"<<endl;
                    break;
                case 2:
                    cout<<"Leave Feedback"<<endl;
                    break;
                default:
                    cout<<"Invalid Choice"<<endl;
                    break;
            }
            break;
        case 'G':
        case 'g':
            cout<<"____Guest Menu____"<<endl
                <<"1 for View Public Content"<<endl
                <<"2 for Register Account"<<endl;
                cout<<"Enter your choice: ";
                cin>>choice1;
            switch(choice1)
            {
                case 1:
                    cout<<"View Public content"<<endl;
                    break;
                case 2:
                    cout<<"Register Account"<<endl;
                    break;
                default:
                    cout<<"Invalid choice"<<endl;
                    break;
            }
            break;
        case 'E':
        case 'e':
            cout<<"Exit Program"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }
    return 0;
}
