#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}