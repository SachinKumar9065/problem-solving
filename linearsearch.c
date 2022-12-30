                                  //LINEAR SEARCH
// NAME - SACHIN KUMAR
// ROLL - 2100321540134
// BRANCH - CSE(DS)
// SECTION - B

#include<stdio.h>
void main()
{
    int a[10],i,size,n;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d",&size);
    printf("ENTER ARRAY ELEMENTS: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER ELEMENT TO BE SEARCHED: ");
    scanf("%d",&n);

     for(i=0;i<size;i++)
    {
        if(a[i]==n)
        {
            printf("ELEMENT FOUND AT INDEX %d",i);
            break;
        }
    }
    if(i==size)
    {
        printf("%d IS NOT PRESENT IN ARRAY",n);
    }
}