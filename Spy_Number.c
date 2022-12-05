#include<stdio.h>
int main()
{
    int a,s=0,r,i,m,p=1;
    scanf("%d",&a);
    m=a;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        s=s+r;
        p=p*r;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}