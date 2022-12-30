                            //ADDITION OF TWO 2D ARRAY
// NAME - SACHIN KUMAR
// ROLL - 2100321540134
// BRANCH - CSE(DS)
// SECTION - B
                            
#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10];
    int n, m, p, q, i, j;
    printf("enter order of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("enter order of second matrix: ");
    scanf("%d%d", &p, &q);

    if (m == p && n == q) 
        printf("enter element of first matrix");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter element of second matrix: ");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++) 
        {

            c[i][j] = (a[i][j] + b[i][j]);
        }
    }
    printf("ADDITION OF TWO MATRIX IS:- \n ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}