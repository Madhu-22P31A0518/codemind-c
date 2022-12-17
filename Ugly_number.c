#include<stdio.h>
int main()
{
    int a,c=0,b,d,x=0;
    scanf("%d",&a);
    while(a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
        }
        else if(a%3==0)
        {
            a=a/3;
        }
        else if(a%5==0)
        {
            a=a/5;
        }
        else 
        {
            printf("Not Ugly Number");
            x=1;
            break;
        }
}
if(x==0)
{
    printf("Ugly Number");
}

}