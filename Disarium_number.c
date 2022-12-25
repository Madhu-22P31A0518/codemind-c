#include<stdio.h>
#include<math.h>
int main()
{
    int a,d,m,r,s=0;
    scanf("%d",&a);
    d=log10(a)+1;
    m=a;
    while(m!=0)
    {
        r=m%10;
        s=s+pow(r,d);
        d--;
        m=m/10;
    }
    if(s==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}