#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,s=1,j;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            s=s*j;
        }
         printf("%d
",s);
        
    }
}