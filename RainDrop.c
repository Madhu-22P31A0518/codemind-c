#include<stdio.h>
int main()
{
    int h;
    scanf("%d",&h);
    if(h%3==0&&h%5!=0&&h%7!=0)
    {
        printf("Pling");
    }
    else if(h%5==0&&h%3!=0&&h%7!=0)
    {
        printf("Plang");
    }
    else if(h%7==0&&h%3!=0&&h%5!=0)
    {
        printf("Plong");
    }
    else if(h%3==0&&h%5==0&&h%7!=0)
    {
        printf("PlingPlang");
    }
    else if(h%5==0&&h%7==0&&h%3!=0)
    {
        printf("PlangPlong");
    }
    else if(h%3==0&&h%7==0&&h%5!=0)
    {
        printf("PlingPlong");
    }
    else 
    {
        printf("%d",h);
    }
}