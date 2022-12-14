#include<stdio.h>
void di(int a,int b)
{
    int c;
    c=a/b;
    printf("%d",c);
}
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   di(a,b);
}