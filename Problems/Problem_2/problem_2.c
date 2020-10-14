#include <stdio.h>
int main()
{
    long long int n;
    printf("N = ");
    scanf("%lld",&n);
    int temp=n,a=0;
    while(n>0)
    {
        int k=n%10;
        if (temp%k == 0)
        a=1;
        n=n/10;
    }
    if(a==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
