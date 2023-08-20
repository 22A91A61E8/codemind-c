#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0;
    while(n>0)
    {
        int r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d",s);
}