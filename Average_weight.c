#include<stdio.h>
int ds(int a,int b,int c)
{
   int x;
   x=3*a-b-c;
 printf("%d",x);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    ds(a,b,c);
}