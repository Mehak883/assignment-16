//2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3],k , i, j;
    printf("enter first matrix");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("enter second matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("product of two matrix : \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            c[i][j]=0;
            for (k = 0; k <= 2; k++)
        { 
            c[i][j] = c[i][j]+ a[i][k] * b[k][j];
        }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}