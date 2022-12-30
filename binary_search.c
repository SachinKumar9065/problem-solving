                                 //BINARY SEARCH
// NAME - SACHIN KUMAR
// ROLL - 2100321540134
// BRANCH - CSE(DS)
// SECTION - B

#include<stdio.h>
void main()
{
    int a[100],i,first,last,middle,n,search;
    printf("ENTER ARRAY SIZE: ");
    scanf("%d",&n);
    printf("ENTER ARRAY ELEMENTS: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER VALUE TO BE FOUND: ");
    scanf("%d",&search);

    first=0;
    last=n-1;
    middle=(first+last)/2;

    while(first<=last)
    {
        if(a[middle] < search)
        first=middle+1;
        else if(a[middle] == search)
        {
            printf("%d found at location %d",search, middle+1);
            break;
        }
        else
        last=middle-1;
        middle=(first+last)/2;
    }
    if(first>last)
    printf("%d not found",search);
}