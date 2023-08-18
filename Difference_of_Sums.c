#include<stdio.h>
int main()
{
    int n,i,s=0,z=0,d,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z=z+i;
        q=i*i;
        s=q+s;
    }
    d=(z*z)-s;
    printf("%d",d);
}