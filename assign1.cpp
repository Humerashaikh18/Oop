#include<iostream>
using namespace std;
int acc,i,n,accw;
class Bank
{
    int accNo,deposit,withdraw,balance;
    string name;
    public:
    void accept();
    void display();
    void depositA();
    void withdrawA();
}b1[100];
void Bank::accept()
{
    cout<<"\nEnter Account Number: ";
    cin>>accNo;
    cout<<"\nEnter Account Holder Name: ";
    cin>>name;
    cout<<"\nEnter Balance";
    cin>>balance;

}
void Bank::display()
{
    cout<<"Account Number: "<<accNo<<endl;
    cout<<"Account Holder Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
}
void Bank::depositA()
{
    cout<<"Enter Account No :";
    cin>>acc;
    for(i=0;i<n;i++)
    {
        if(acc==b1[i].accNo)
        {
             cout<<"\nEnter the amount to be deposited: ";
             cin>>deposit;
             b1[i].balance=b1[i].balance+deposit;
             cout<<"\nCurrent Balance :"<<b1[i].balance;
        }
        else
        {
            cout<<"\nAccount Not Found";
        }
    }
}
void Bank::withdrawA()
{
    cout<<"Enter Account No :";
    cin>>accw;
    for(i=0;i<n;i++)
    {
        if(accw==b1[i].accNo)
        {
            cout<<"\nEnter the amount to be withdrawn: ";
            cin>>withdraw;
            b1[i].balance=b1[i].balance-withdraw;
            cout<<"\nCurrent Balance:"<<b1[i].balance;
        }
        else
        {
            cout<<"\nAccount Not Found";
        }
    }
}
int main()
{
    int ch;
    do
    {
      cout<<"-------Menu------";
      cout<<"\n1. Accept Account Details";
      cout<<"\n2. Display Account Details";
      cout<<"\n3. Deposit Amount";
      cout<<"\n4. Withdraw Amount";
      cout<<"\n5. Exit";
      cout<<"\n\nEnter your choice: ";
      cin>>ch;
      switch (ch)
      {
      case 1:
      cout<<"Enter the No. of user:";
      cin>>n;
      for(i=0;i<n;i++)
      b1[i].accept();
      break;
      case 2:
      for(i=0;i<n;i++)
      b1[i].display();
      break;
      case 3:
      b1[i].depositA();
      break;
      case 4:
      b1[i].withdrawA();
      break;
      case 5:
      exit(0);

      }
    } while(ch!=0);
    return 0;    

}