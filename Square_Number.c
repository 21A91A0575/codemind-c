#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}