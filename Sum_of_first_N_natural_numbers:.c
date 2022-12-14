#include<stdio.h>
void di(int a)
{
    int c;
    c=(a*(a+1))/2;
    printf("%d",c);
}
int main()
{
   int a;
   scanf("%d",&a);
   di(a);
}