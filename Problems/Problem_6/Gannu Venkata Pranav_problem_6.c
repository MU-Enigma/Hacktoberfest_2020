#include<stdio.h>
int main()
{
int i,yr;
printf("Enter year: ");
scanf("%d",&yr);
for(i=1;i<=20;)
{
if(yr%4==0 || yr%400==0 && yr%100==0)
{
printf("%d is a leap year\n",yr);
i++;
}
yr+=1;
}
return 0;
}
