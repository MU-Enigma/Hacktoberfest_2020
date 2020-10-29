#include<iostream.h>
#include<conio.h>

//Problem 4
void main()
{ int n;
  cout<<" Enter a value for n: ";
  cin>>n;

  for(int i=1; i<=n; i++)
   {for(int j=1; j<=i; j++)
     cout<<j<<" ";
     cout<<"\n";
   }
  getch();
}
