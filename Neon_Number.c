#include<stdio.h>
int main()
{
    int a,n,r,s=0;
    scanf("%d",&a);
    n=a*a;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }
    if(s==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}