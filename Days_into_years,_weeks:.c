#include<stdio.h>
#include<math.h>
int ds(int a)
{
   int d,y;
   y=a/365;
   d=(a%365)/7;
   printf("%d
%d",y,d);
}
int main()
{
    int a;
    scanf("%d",&a);
    ds(a);
}