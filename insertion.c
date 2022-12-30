                                   //INSERTION
// NAME - SACHIN KUMAR
// ROLL - 2100321540134
// BRANCH - CSE(DS)
// SECTION - B

#include<stdio.h>
void main()
{
    int a[10],n,i,j,k,temp;
      temp=0;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
   j=i+1;
   while(j>0 && a[j-1]>a[j])
   {
    temp=a[j-1];
    a[j-1]=a[j];
    a[j]=temp;
    j--;
   }
    }
    printf("sorrted array");
    for(i=0;i<n;i++)
    {
     printf("%d",a[i]);
    }
}