#include<stdio.h>
int ar(int a,int b)
{
    int c;
    c=0.5*(a*b);
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=ar(a,b);
  printf("%d",x);  
}