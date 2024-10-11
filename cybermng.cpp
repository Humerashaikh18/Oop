#include<iostream>
#include<string.h>

using namespace std;

class login
{
     public:
     char name[20];
     char pass[20];
     int id,ch;
     char username[20];


     void main()
     {
        cout<<"\n\n\t\t\t\t\t1)login as admin";
        cout<<"\n\n\t\t\t\t\t2)login as user";
        cout<<"\n\n\t\t\t\t\t #enter your choice(1/2)";
        cin>>ch;
   
                 switch (ch)
                 {
                 case 1:
                     cout<<"\n\n\t\t\t\t\t || ADMIN LOGIN  ||\t\t\n";
                   
                    cout<<"\n\t\t\t\t\t\tEnter your username: ";
                    cin>>username;
                    cout<<"\n\t\t\t\t\t\tEnter your password :";
                    cin>>pass;
                
                    if(strcmp(username,"admin"))
                    {
                        if(strcmp(pass,"cybercafe"))
                        {
                    
                            cout<<"\n\t\t\t\t\t\tWELCOME ADMIN !! LOGIN SUCCESSFULL:";

                        }
                        else
                        {
                             cout<<"\n\t\t\t\t\t\tINCORRECT PASSWORD !! FAILED TO LOGIN ";
                        }
            
                    }
                    else
                    {
                        cout<<"\n\t\t\t\t\tINVALID USERNAME !! FAILED TO LOGIN ";

                    }
                    break;
      
                 case 2:
            
                     cout<<"press \n 1.login \n 2.New User? sign up \n ";
                     cin>>ch;

                     switch (ch)
                     {
                     case 1:
                        cout<<"\t\t|| USER LOGIN ||\t\t\t\n";
        
                        break;
                     
                     default:
                        cout<<"Invalid choice!!!";
                        break;
                     }
                 }
     } 
     void heading()
     {
         cout<<"\n\t\t\t-------------------------------------------------------------\t\t";
         cout<<"\n\t\t\t |            WELCOME TO CYBER MANAGEMENT SYSTEM              |\t\t";
         cout<<"\n\t\t\t--------------------------------------------------------------\t\t";
     }   
     void main_heading()
     {
        cout<<"\n\t\t\t----------------------------------------------------------------\t\t";
        cout<<"\n\t\t\t |                CYBER MANAGEMENT SYSTEM                      |\t\t";
        cout<<"\n\t\t\t----------------------------------------------------------------\t\t";
    
     }
     void getinfo()
     {
        cout<<"Enter your username ";
        cin>>username;
        cout<<"Enter your password ";
        cin>>pass;
        cout<<"Enter the user id:";
         cin>>id;
    
    
     }
     void putdata()
     {
        cout<<"Enter your username:\n "<<username;
        cout<<"Enter your password :\n"<<pass;
        cout<<"Enter the user id:\n"<<id;
     }

     
};     
    int main()
    {  
       login l1;
       l1.main_heading();
       l1.heading();
       l1.main();
       login l[10];
       int ch,n,i;
       do
       {
       cout<<"\t\t\t\t|--MENU--|\t\t\t\t\t";
       cout<<"\n1.Insert record \n2.Display record \n3.Search record  \n4.Exit\n";
       cout<<"Enter your choice:";
       cin>>ch;
       switch(ch)
       {
        case 1:
        cout<<"enter the number of users:";
        cin>>n;
        for(i=0;i<n;i++)
            l[i].getinfo();
            break;

        case 2:
        for(i=0;i<n;i++)
        l[i].putdata();
        break;
        case 3:
        char s_user[20];
        char password[10];
        int id;
        cout<<"Enter the username:";
        cin>>s_user;
        cout<<"Enter the password:";
        cin>>password;
        cout<<"enter the user-id:";
        cin>>id;

        for(i=0;i<n;i++)
        {
            if(strcmp(s_user,l[i].username)==0 && strcmp(password,l[i].pass))
            {
                cout<<"\n user found";
                cout<<"\n username of user: "<<l[i].username;
                cout<<"\n password of user :"<<l[i].pass;
                cout<<"\n user_id of user:"<<l[i].id;
                break;
            }
            else
            {
                cout<<"USER NOT FOUND!!";
                break;
            }
        }
        break;
        default:
        cout<<"Enter valid choice!!";
        case 4:
        exit(1);
       }    
       }while(1);
       return 0;
    }