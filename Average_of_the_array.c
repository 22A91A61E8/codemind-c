#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float s=0,c;
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    c=(s/n);
    printf("%0.2f",c);
    
}