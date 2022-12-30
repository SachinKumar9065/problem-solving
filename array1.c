#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array element: ");
    for(i=0;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=n;i>=0;i--){
    printf("%d\t",a[i]);
    }
}