#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,f,b;
    scanf("%d",&n);
    for(int i=n;;i++)
    {
        if(prime(i))
        {
            f=i;
            break;
        }
    }
    for(int i=n;;i--)
    {
        if(prime(i))
        {
            b=i;
            break;
        }
    }
    int d1=f-n;
    int d2=n-b;
    if(d1<d2)
    {
        printf("%d ",d1);
    }
    else if(d2<=d1)
    {
        printf("%d ",d2);
    }
}