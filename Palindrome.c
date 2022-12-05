#include<stdio.h>
int main()
{
    int a,s=0,r,i,m;
    scanf("%d",&a);
    m=a;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        s=s*10+r;
    }
    if(m==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}