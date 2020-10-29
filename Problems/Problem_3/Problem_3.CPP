#include<iostream.h>
#include<conio.h>

//Problem 3
void main()
{ int a,b,c;
  cout<<"Input three numbers: ";
  cin>>a>>b>>c;

  if(((a*a)==(b*b + c*c)))
   cout<<a<<" "<<b<<" "<<c<<" ";
  else if(((b*b)==(a*a + c*c)))
   cout<<b<<" "<<a<<" "<<c<<" ";
  else if(((c*c)==(a*a + b*b)))
   cout<<c<<" "<<a<<" "<<b<<" ";
  else
   cout<<"Nope!";

  getch();
}

