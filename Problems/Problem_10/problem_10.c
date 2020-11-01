#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,m=1;
    printf("Enter n:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid input!");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            sum=sum+pow((m+i),4);
            m=m+i;
        }
        printf("%d",sum);
    }
}