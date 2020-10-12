#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(int i=1;i<=12;i++)
    {
        b=a*i;
        printf("%d\n",b);
    }
    return 0;

}