#include<stdio.h>
int pr(int a,int b)
{
    if(b>a)
    {
        return 0;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=pr(a,b);
    if(x==0)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
}