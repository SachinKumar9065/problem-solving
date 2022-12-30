                                       //BUBBLE SORT
// NAME - SACHIN KUMAR
// ROLL - 2100321540134
// BRANCH - CSE(DS)
// SECTION - B
                                   
#include<stdio.h>
void main()

{
      int a[10],n,p,s,i,k,temp;
      temp=0;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(p=0;p<n;p++)
    {
        for(s=0;s<n-p-1;s++)
        {
            if(a[s]>a[s+1])
            {
                temp=a[s];
                a[s]=a[s+1];
                a[s+1]=temp;
            }
           
        }
      
    }
        for(i=0;i<n;i++)
     {
     printf("%d\t",a[i]);
   }
  
}