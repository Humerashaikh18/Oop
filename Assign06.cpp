#include<iostream>
using namespace std;

class Television
{
int modelno,size,prize;
public:
friend istream & operator>>(istream &,Television &);
friend ostream & operator<<(ostream &,Television &);
};

istream & operator>>(istream & bin,Television & a)
{
int e;
cout<<"\n Enter the Model number,Size,Prize \n ";
bin>>a.modelno>>a.size>>a.prize;

try
{
if(a.modelno>9999 || a.size<12 || a.size>70 || a.prize<0 || a.prize>5000)
{
throw e;
}
}
catch(int e)
{
cout<<"\n Exception caught";
a.modelno=0;
a.size=0;
a.prize=0;
}
return bin;
}

ostream & operator<<(ostream & bout,Television & a)
{
bout<<"\n Enter the Television details:\n ";
bout<<"\n Model number : "<<a.modelno;
bout<<"\n Television size : "<<a.size;
bout<<"\n Television Prize : "<<a.prize;
return bout;
} 

int main()
{
Television a;
int ch;
do{
cout<<"\n Enter your choice: \n 1.Accept \n 2.Display \n 3.Exit \n";
cin>>ch;
switch(ch)
{
 case 1:
 cin>>a;
 break;
 
 case 2:
 cout<<a;
 break;
 
 case 3:
 exit(0);
}
}while(ch!=0);
return 0;
}










