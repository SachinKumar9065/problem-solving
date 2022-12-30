                             //INTERSECTION OF TWO SETS
// NAME - SACHIN KUMAR
// ROLL - 2100321540134
// BRANCH - CSE(DS)
// SECTION - B

#include<stdio.h>
int removerepeated(int size, int a[]);
void sort(int size, int a[]);
int main()
{
    int i,size1,size2, size,j=0,k,intersectionsize;
    printf("ENTER THE SIZE OF SET 1: ");
    scanf("%d",&size1);
    printf("ENTER THE SIZE OF SET 2: ");
    scanf("%d",&size2);

    int a[size1],b[size2],uni[size1 + size2];
    if(size1<size2)
    {
        intersectionsize=size2;
    }
    else
    {
        intersectionsize=size1;
    }
    int intersection[intersectionsize];
    printf("ENTER THE ELEMENTS OF SET 1: ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE ELEMENTS OF SET 2: ");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }
//intersection start
k=0;
for(i=0;i<size1;i++)
{
    for(j=0;j<size2;j++)
    {
        if(a[i]==b[j])
        {
            intersection[k]=a[i];
            k++;
        }
    }
}
    
//sorting
    sort(k,intersection);
//remove repeated elements
    size=removerepeated(k,intersection);
    printf("INTERSECTION IS:  \n");
    if(size>0)
    {
    for(i=0;i<size;i++)
    {
        printf("%d\n",intersection[i]);
    }
    }
    else
    {
        printf("NO INTERSECTION\n");
    }
}

int removerepeated(int size,int a[]){

int i,j,k;

for(i=0;i<size;i++)
{
    for(j=i+1;j<size;)
    {
        if(a[i]==a[j])
        {
            for(k=j;k<size;k++)
            {
                a[k]=a[k+1];
            }
            size--;
        }
        else
        {
            j++;
        }
    }

}
return(size);
}
void sort(int size,int a[])
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
