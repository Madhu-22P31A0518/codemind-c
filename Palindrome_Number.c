#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m,a,s=0,r;
        scanf("%d",&a);
        m=a;
        while(a!=0)
        {
            r=a%10;
            s=s*10+r;
            a=a/10;
        }
        if(m==s)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}