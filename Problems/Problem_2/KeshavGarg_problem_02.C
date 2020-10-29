#include<stdio.h>
#include<conio.h>
main()
{
 int n,a,i,c=0;
 clrscr();
 printf("N = ");
 scanf("%d",&n);
 a=n;
 for(i=n;i>=1;i=i/10)
 {
  a=a%10;
  if(n%a==0)
   c++;
 }
 if(c>0)
 printf("YES");
 else
 printf("NO");
 getch();
}
