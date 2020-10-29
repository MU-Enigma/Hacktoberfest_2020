#include<iostream.h>
#include<conio.h>

//Problem 7
void main()
{ int sum, n;
  cout<<" Enter a value for n: ";
  cin>>n;

  for(int i=1; i<=n; i++)
   sum = sum +i;

  cout<<"Sum = "<<sum;
  getch();
}
