#include<stdio.h>
int main()
{
    int a,m,i,s=0,r;
    scanf("%d",&a);
    m=a;
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
        s=s+i;
        }
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