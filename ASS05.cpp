#include<iostream>
#include<cstring>
using namespace std;
int i;
class person
{
 public:
 int id;
 string name,desg;
 int salary;
 virtual void accept()=0;
 virtual void display()=0;
};
class doctor:public person
{
 public:
 void accept();
 void display();
};
class nurse:public person
{
 public:
 void accept();
 void display();
};
class AdStaff:public person
{
 public:
 void accept();
 void display();
};
void doctor::accept()
{
 cout<<"\nenter Name of doctor: ";
 cin>>name;
 cout<<"\nEnter id: ";
 cin>>id;
 cout<<"\nenter designation: ";
 cin>>desg;
}
void doctor::display()
{
 cout<<"\nname:"<<name<<"\nid:"<<id<<"\nDesignation:"<<desg;
}
void nurse::accept()
{
 cout<<"\nenter Name of nurse";
 cin>>name;
 cout<<"\nEnter id:";
 cin>>id;
 cout<<"\nenter designation:";
 cin>>desg;
 cout<<"\nEnter salary:";
 cin>>salary;
}
void nurse::display()
{
 cout<<"\nname: "<<name<<"\nid: "<<id<<"\nDesignation: "<<desg<<"\nsalary: "<<salary;
}
void AdStaff::accept()
{
 cout<<"\nenter Name of Administrative: ";
 cin>>name;
 cout<<"\nEnter id: ";
 cin>>id;
 cout<<"\nenter designation: ";
 cin>>desg;
 cout<<"\nEnter salary: ";
 cin>>salary;
}
void AdStaff::display()
{
 cout<<"\nname: "<<name<<"\nid: "<<id<<"\nDesignation: "<<desg<<"\nsalary: "<<salary;
}
int main()
{
 doctor d;
 nurse n[4];
 AdStaff a[5];
 int ch;
 do
 {
  cout<<"\n-------Menu------";
   cout<<"\n1.accept for doctor \n2.dispplay for doctor \n3.accept for nurse \n4.display for nurse\n5.accept for administrative \n6.display for administrative \n7.exit";
   cin>>ch;
   switch(ch)
   {
    case 1:
    //(i=0;i<n;i++)
    d.accept();
    break;
    case 2:
    //for(i=0;i<n;i++)
    d.display();
    break;
    case 3:
    //for(i=0;i<n;i++)
    n[i].accept();
    break;
    case 4:
    //for(i=0;i<n;i++)
    n[i].display();
    break;
    case 5:
    a[i].accept();
    break;
    case 6:
    a[i].display();
    break;
    case 7:
    exit(0);
   }
   }while(ch!=0);
   return 0;
  }  
