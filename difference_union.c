#include<stdio.h>
void main()
{
    int i,j,k=0,a[20],b[20],c[20],m,n;
    printf("enter the size of first set: ");
    scanf("%d",&m);
    printf("enter element of first set: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter size of second set: ");
    scanf("%d",&n);
    printf("enter element of second set: ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<m;i++)
    {
       int t=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                t=1;
            }
        }
            if(t==0)
            {
                c[k]=a[i];
                k++;
            }
            
         
    } 
    printf("A-B");
    for(i=0;i<k;i++)
    {
    printf("%d",c[i]);
    }

    for(i=0;i<m;i++)
    {
       int t=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                t=1;
            }
        }
            if(t==0)
            {
                c[k]=a[i];
                k++;
            }
            
         
    } 
    printf("A-B");
    for(i=0;i<k;i++)
    {
    printf("%d",c[i]);
    }
}