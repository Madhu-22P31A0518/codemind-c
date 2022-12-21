#include<stdio.h>
void tr(int a,int b,int c)
{
    float d;
    d=(a+b)*c*0.5;
    printf("%0.4f",d);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    tr(a,b,c);
}