#include<stdio.h>
int main()
{
     int i,n;
     printf("Enter the year: ");
     scanf("%d",&n);
     for(i=1;i<=20;)
     {
        if(n%4==0 || n%400==0 && n%100==0)
        {
            printf("%d is a leap year\n",n);
            i++; 
         }
       n=n+1;
     }
     return 0;
}