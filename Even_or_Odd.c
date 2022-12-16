#include<stdio.h>
int eo(int a)
{
    if(a%2==0)
    {
        return 0;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int x=eo(a);
    if(x==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}