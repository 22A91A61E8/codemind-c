#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if((b-a)==0)
        {
            printf("NEUTRAL
");
        }
        else if((b-a)>0)
        {
            printf("PROFIT
");
        }
        else
        {
            printf("LOSS
");
        }
    }
}