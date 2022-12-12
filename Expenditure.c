#include<stdio.h>
int ex(int a,int b)
{
    if(a>=b*30)
    {
        return 0;
    }
   
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x;
    x=ex(a,b);
    if(x==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}