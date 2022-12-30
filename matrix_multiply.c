                                  //MULTIPLICATION OF 2D ARRAY
// NAME - SACHIN KUMAR
// ROLL - 2100321540134
// BRANCH - CSE(DS)
// SECTION - B

#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
    printf("ENTER THE ORDER OF 1ST MATRIX: ");
    scanf("%d%d",&m,&n);
    printf("ENTER THE ORDER OF 2ND MATRIX: ");
    scanf("%d%d",&p,&q);
    
    if(n==p)
    printf("ENTER ELEMENT OF 1ST MATRIX: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER ELEMENT OF 2ND MATRIX: ");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
        c[i][j]=0;
    for(k=0;k<n;k++)
    {
    c[i][j] = c[i][j] + a[i][k]*b[k][j];
    }
        }
    }
    printf("OUTPUT MATRIX\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}