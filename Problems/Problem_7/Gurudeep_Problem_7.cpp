#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int a;
int b=0;
cout<<"Enter a number upto which you need to find sum:";
cin>>a;
for(int i=0;i<=a;i++)
{
b+=i;
}
cout<<b;
getch();
}
