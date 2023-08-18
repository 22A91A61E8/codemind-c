#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x+i;
    }
    printf("%d",x);
}