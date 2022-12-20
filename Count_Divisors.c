#include<stdio.h>
int main()
{
    int a,b,k,r,i,c=0;
    scanf("%d%d%d",&a,&b,&k);
    for(i=a;i<=b;i++)
    {
        if(i%k==0)
        c++;
    }
    printf("%d",c);
}