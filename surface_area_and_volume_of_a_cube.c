#include<stdio.h>
#include<math.h>
void hm(int a)
{
    int s,v;
    s=6*pow(a,2);
    v=pow(a,3);
    printf("Surface area = %d and Volume = %d",s,v);
}
int main()
{
    int a;
    scanf("%d",&a);
    hm(a);
}