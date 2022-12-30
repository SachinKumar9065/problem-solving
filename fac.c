#include<stdio.h>
void main()
{
    int i,n,c;
    printf("enter no: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;

        printf("%d\t",i);
        
    }
    if(c/2!=0)
    printf("factor is odd");
    else
    printf("factor is even");
}