#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int a;
int b=2;
int i=0;
cout<<"Enter a year after you want to check for leap years for next 20 yrs:";
cin>>a;
do{
++a;
if((a%4==0)&&(a%100!=0)||(a%400==0))
{
cout<<a<<" is a leap year"<<endl;
i++;
if(i<=20)
b+=1;
}
else
{
b+=1;
}
}while(i<20);
getch();
}