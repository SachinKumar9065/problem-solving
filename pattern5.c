#include<stdio.h>
int rpattern(int n);
int main()
{
    int n;
    printf("enter no: ");
    scanf("%d",&n);
    rpattern(n);
}  
   int rpattern(int n)
    {
        if(n>0)
        printf("%d",n);
        return rpattern(n-5);
        {
            printf("%d",n);
        }

    }
    
