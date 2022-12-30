#include<stdio.h>
void main()
{
    int a[10],n,i,m,t;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array element: ");
    for(i=0;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the element at m position");
    scanf("%d",&m);
    t=a[m];
    a[m]=12;
    a[n+1]=a[m];
    {
        printf("new array");
        for(i=0;i<=n;i++)
         printf("%d\t",a[i]);
    }
    
    
    
    
}