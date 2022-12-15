#include<stdio.h>
void hm(int a)
{
    int h,m,s;
    h=a/3600;
    m=(a%3600)/60;
    s=a-(h*3600)-(m*60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}
int main()
{
    int a;
    scanf("%d",&a);
    hm(a);
}