#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    printf("%d %d %d ",a,b,c);
    for(i=4;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);
    }
    
}