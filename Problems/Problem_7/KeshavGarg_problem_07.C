#include<stdio.h>
#include<conio.h>
main()
{
 int i,n,a=0;
 clrscr();

 printf("Enter the value of n:");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  a=a+i;
 }
 printf("Sum = %d",a);

 getch();
}