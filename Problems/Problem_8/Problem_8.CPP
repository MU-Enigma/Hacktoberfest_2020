#include<iostream.h>
#include<conio.h>

//Problem 8
void main()
{
  int len = 0, flag = 0;
  char check[50];

  cout<<"Enter the string: ";
  cin>>check;
  len = strlen(check);

  for(int i=0; i<len; i++)
   { if(check[i] != check[len-1-i])
      {  flag=1;
         break;
      }
   }

  if(flag== 0)
   cout<<"String is palindrome!";
  else
   cout<<"String is not palindrome!";

  getch();
}
