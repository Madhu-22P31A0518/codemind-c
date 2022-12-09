#include<stdio.h>
int main()
{
    int i,c;
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    c=(2*a[0]*a[1]*a[2]*512)/1024;
    printf("%dKB",c);
    
}