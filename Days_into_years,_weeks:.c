#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int h,m;
    h=a/365;
    m=(a%365)/7;
    printf("%d
%d",h,m);
}