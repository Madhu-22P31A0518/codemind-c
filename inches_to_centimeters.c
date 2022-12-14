#include<stdio.h>
void ic(int a)
{
    float c;
    c=a*2.54;
    printf("%0.2f",c);
}
int main()
{
    int a;
    scanf("%d",&a);
    ic(a);
    
}