#include<stdio.h>
int sum(int n)
{
    int a;
    a=(n*(n+1))/2;
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x;
    x=sum(n);
    printf("%d",x);
}