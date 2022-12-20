#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,A,B;
    scanf("%d%d%d",&a,&b,&c);
    A=pow(a,b);
    B=A%c;
    printf("%d",B);
}