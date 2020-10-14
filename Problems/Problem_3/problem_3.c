#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers(a,b,c):");
    scanf("%d %d %d",&a,&b,&c);
    if((a*a)==(b*b)+(c*c))
    {
        printf("%d %d %d",a,b,c);
    }
    else
    { 
        if((b*b)==(a*a)+(c*c))
        {
            printf("%d %d %d",b,a,c);
        }
        else
        {
            if((c*c)==(a*a)+(b*b))
            {
                printf("%d %d %d",c,a,b);
            }
            else
            {
                printf("NOPE!");
            }
        }
    }
}