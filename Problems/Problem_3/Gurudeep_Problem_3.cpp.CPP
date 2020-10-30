#include<iostream.h>                                                       ;
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int a,b,c;
cout<<"\nEnter 1st number:";
cin>>a;
cout<<"\nEnter 2nd number:";
cin>>b;
cout<<"\nEnter 3rd number:";
cin>>c;
if((a*a)==(b*b)+(c*c))
{
cout<<a<<" "<<b<<" "<<c;
}
else if((b*b)==(c*c)+(a*a))
{
cout<<b<<" "<<c<<" "<<a;
}
else if((c*c)==(a*a)+(b*b))
{
cout<<c<<" "<<b<<" "<<a;
}
else
{
cout<<"\n NOPE";
}
getch();
}