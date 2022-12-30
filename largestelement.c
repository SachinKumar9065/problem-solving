#include <stdio.h>
void main()
{
    int a[10], n, i, j, temp;
    printf("enter size of array: ");
    scanf("%d", &n);
    printf("enter array element: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n ", a[i]);
    }
    printf("smmallest no: %d\n",a[0]);
    printf("largest no: %d",a[n-1]);
}