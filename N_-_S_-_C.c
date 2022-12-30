#include<stdio.h>
int main()
{
    int a,b,p,s,i;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        p=i*i;
        s=i*i*i;
        printf("%d %d %d
",i,p,s);
    }
}