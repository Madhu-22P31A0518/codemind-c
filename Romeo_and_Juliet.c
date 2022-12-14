#include<stdio.h>
void di(int x,int y,int z)
{
    int c;
    c=(5*x+10*y)/z;
    printf("%d",c);
}
int main()
{
   int x,y,z;
   scanf("%d%d%d",&x,&y,&z);
   di(x,y,z);
}