#include<stdio.h>
#include<math.h>
void ds(int a,int b,int c,int d)
{
    
    float e;
    e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("%0.4f",e);
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    ds(a,b,c,d);
}