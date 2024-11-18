#include<iostream>
#include<cstring>
int i;
using namespace std;
class student
{
 int roll;
 string prn,name;
 public:
 void accept();
 void display();
};
class result:public student
{
 int c1,c2,c3,e1,e2,e3;
 char s1,s2,s3;
 float avg;
 public:
 void accT();
 void disT();
};
void student::accept()
{
 cout<<"Enter roll no :";
 cin>>roll;
 cout<<"Enter name:";
 cin>>name;
 cout<<"Enter Prn:";
 cin>>prn;
}
void student::display()
{
 cout<<"roll no :"<<roll;
 cout<<"name:"<<name;
 cout<<"Prn:"<<prn;
}
void result::accT()
{
 cout<<"\nEnter subject 1: :"<<"\nEnter CIA marks:"<<"\nEnter End sem marks";
 cin>>s1>>c1>>e1;
 cout<<"\nEnter subject 2: :"<<"\nEnter CIA marks:"<<"\nEnter End sem marks";
 cin>>s2>>c2>>e2;
 cout<<"\nEnter subject 3: :"<<"\nEnter CIA marks:"<<"\nEnter End sem marks";
 cin>>s3>>c3>>e3;
}
void result::disT()
{
 avg=(c1+c2+c3+e1+e2+e3)/3;
 cout<<"\nsubject 1: :"<<s1<<"\t CIA marks:"<<c1<<"\t End sem marks"<<e1;
 cout<<"\nsubject 2: :"<<s2<<"\t CIA marks:"<<c2<<"\t End sem marks"<<e2;
 cout<<"\nsubject 3: :"<<s3<<"\t CIA marks:"<<c3<<"\t End sem marks"<<e3;
 cout<<"\nAverage Marks :"<<avg;
 
 }
 int main()
 {
  result r[100];
  int ch,n;
  cout<<"Enter the no. of student you want to store";
  cin>>n;
  do
  {
   cout<<"Menu";
   cout<<"1.accept student info \n 2.display student info \n 3.accept subject and marks \n 4.display marks and average\n 5.exit";
   cin>>ch;
   switch(ch)
   {
    case 1:
    for(i=0;i<n;i++)
    r[i].accept();
    break;
    case 2:
    for(i=0;i<n;i++)
    r[i].display();
    break;
    case 3:
    for(i=0;i<n;i++)
    r[i].accT();
    break;
    case 4:
    for(i=0;i<n;i++)
    r[i].disT();
    break;
    case 5:
    exit(0);
   }
   }while(ch!=0);
   return 0;
  }
                                                                                                                                                  
  
  
  

