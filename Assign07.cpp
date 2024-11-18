#include<iostream>
using namespace std;
int n,i,j;
template<class T>
void selsort(T a[10])
{
 cout<<"\nEnter size of array:";
 cin>>n;
 cout<<"\n Enter Element:";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   T t;
   if(a[i]>a[j])
   {
   t=a[i];
   a[i]=a[j];
   a[j]=t;
  }
  }
 }
 cout<<"Sorted array are;";
 for(i=0;i<n;i++)
 {
  cout<<"\n"<<a[i];
 }
}
int main()
{
 int ch;
 int a[10];
 float b[10];
 char c[10];
 do
 {
 cout<<"\n menu";
 cout<<"\n1.Integer Array \n2.Float Array: \n3.Character Array";
 cout<<"\nEnter your choice:";
 cin>>ch;
 switch(ch)
 {
  case 1:
  selsort(a);
  break;
  case 2:
  selsort(b);
  break;
  case 3:
  selsort(c);
  break;
  case 4:
  exit(0);
 }
 }while(ch!=4);
 return 0;
}

