#include<iostream>
#include<string.h>
using namespace std;

int i,n;
class Books
{

int price,sp;
char *tt,*aut,*pub;
public:

Books()
{
tt=new char;
aut=new char;
pub=new char;
price=100;
sp=20;
strcpy(tt,"oop");
strcpy(aut,"Ebal");
strcpy(pub,"TATA");

}

void accept()
{
cout<<"\n Enter the title ,author,pub,price sp";
cin>>tt>>aut>>pub>>price>>sp;
}
void display();
void search();

~ Books()
{
cout<<"\n Destructor is called";
}

} b[10];



void Books::search()
{
int cost,f=0,f1=0,cp;
char *t,*a;
t=new char;
a=new char;

cout<<"\n Enter the title and author which u want to search";
cin>>t>>a;


for(i=0;i<n;i++)
{
if(strcmp(t,b[i].tt)==0 && strcmp(a,b[i].aut)==0)
{
f=1;
cout<<"Book is found";
b[i].display();

cout<<"Enter the number";
cin>>cp;
if(cp<=b[i].sp)
{
f1=1;
cost=b[i].price*cp;
cout<<"\n Total cost ="<<cost;
break;
}
}
}
if(f==1 && f1==0)
{
cout<<"\n Book is availble but number of copies are not avialble";
}

if(f==0)
cout<<"\n Book is not found";


}
void Books::display()
{
cout<<"\n"<<tt<<"\t"<<aut<<"\t"<<pub<<"\t"<<price<<"\t"<<sp;

}



int main()
{
int ch,i;
cout<<"\n Enter the Total number of Copies";
cin>>n;
do
{


cout<<"\n Main Menu";
cout<<"\n 1.Accept\n2.Display\n3.Search";
cout<<"\n Enter the chopice";
cin>>ch;
switch(ch)
{
case 1:
for(i=0;i<n;i++)
{
b[i].accept();
}
break;


case 2:
cout<<"\n Title\tAut\tPub\tPrice\tStock";
for(i=0;i<n;i++)
{
b[i].display();
}
break;
case 3:
b[i].search();
}


}while(ch!=0);
return 0;
}













