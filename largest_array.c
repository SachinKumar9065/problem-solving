                            //LARGEST ELEMENT IN ARRAY
// NAME-SACHIN KUMAR
// ROLL-2100321540134
#include<stdio.h>
void main()
{
    int a[20],i,n,j,temp;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    printf("ENTER ARRAY ELEMENTS: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(a[i]>a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          } 
            
        }
        
    }
    printf("LARGEST ELEMENT IS:- ");
    printf("%d",a[n-1]);
}