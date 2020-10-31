int main()    
{    
int n,m,sum=0,temp;    
printf("Enter the number:-");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
m=n%10;    
sum=(sum*10)+m;    
n=n/10;    
}    
if(temp==sum)
{   
printf("It is a palindrome number");
}    
else
{  
printf("It is not palindrome");
}   
return 0;  
}   