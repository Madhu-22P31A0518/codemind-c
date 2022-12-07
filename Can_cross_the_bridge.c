#include<stdio.h>
int cr(int a,int b,int c)
{
    int n;
    n=(c-b)/a;
    return n;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x;
    x=cr(a,b,c);
    printf("%d",x);
}