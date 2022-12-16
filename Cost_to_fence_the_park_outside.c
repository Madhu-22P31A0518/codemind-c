#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int a;
    a=((b+(2*w))*(l+(2*w))-(l*b))*c;
    printf("%d",a);
}