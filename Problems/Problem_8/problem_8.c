#include<stdio.h>
#include<string.h>
int main()
{
    char set[50],n,i,a=0;
    printf("Enter string:");
    scanf("%[^\n]%*c",set);
    n=strlen(set);
    for(i=0;i<(n/2);i++)
    {
        if(set[i]==set[n-i-1])
        {
            a++;
        }
    }
    if(a==i)
    {
        printf("%s is a palindrome");
    }
    else
    {
        printf("%s is not a palindrome");
    }

}