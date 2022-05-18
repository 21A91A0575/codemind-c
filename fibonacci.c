#include<stdio.h>
int main()
{
    int i,x,y,t,n;
    scanf("%d",&n);
    x=0;
    y=1;
    printf("%d ",x);
    while(n>1)
    {
        t=x;
        x=x+y;
        printf("%d ",x);
        y=t;
        n-=1;
    }
}