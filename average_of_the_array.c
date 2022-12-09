#include<stdio.h>
int main()
{
    int n,i;
    float c,s=0;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        s=a[i]+s;
    }
    c=s/n;
    printf("%0.2f",c);
}