#include<stdio.h>
void cn(int a,int b,int c)
{
    if(a<=(b*1+c*2))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    cn(a,b,c);
}