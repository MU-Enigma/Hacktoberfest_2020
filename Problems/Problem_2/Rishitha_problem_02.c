#include<stdio.h>
int main()
{
int n;
int flag =1;
printf("enter no");
scanf("%d",&n);
while(n>0)
{
int r=n%10;
if(!(r!=0 && n%r==0)){
flag=0;
}
n/=10;
}
if(flag==1)
printf("yes");
else
printf("no");
return0;
}