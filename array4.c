#include<stdio.h>
void main()
{
    int a[10],i,n,min;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array element");
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    {
    min=a[0];
    for(i=0;i<=n;i++)
    if(a[i]<min)
    printf("%d",min);
    }
}