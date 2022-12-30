#include<stdio.h>
void main()
{
    int n,m,k=0,i,j;
    int a[10],b[10],c[10];
    printf("enter the size of first set: ");
    scanf("%d",&m);
    printf("enter element of first set: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size of second set: ");
    scanf("%d",&n);

    
    printf("enter element of second set: ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
            c[k]=a[i];
            k++;
            }
        }
    }
    printf("intersection is: ");
    for(i=0;i<k;i++)
    {
        printf("%d\t",c[i]);
    }
}