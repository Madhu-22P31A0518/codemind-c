#include<stdio.h>
int main()
{
    int a,i,q,s=0;
    scanf("%d",&a);
    q=a;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    if(s>q)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}