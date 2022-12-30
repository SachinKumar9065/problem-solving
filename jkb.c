#include<stdio.h>
void main()
{
    int i,n,c,a;
    printf("enter no: ");
    scanf("%d",&n);
 
    while(n>0)
    {
    
        a=n%10;
        n=n/10;

        c++;

    }
    printf("%d",c);

}