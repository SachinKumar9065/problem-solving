#include<stdio.h>
void main()
{
    int n,a,b,c,x,s;
    printf("ENTER THE VALUE OF N: ");
    scanf("%d",n);
    x=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    s=a*a*a + b*b*b + c*c*c;
    if(s==x)
    printf("armstrong");
    else
    printf("not");
}