#include<stdio.h>

int main()
{
    int a[30][30], b[30][30], c[30][30], i, j, k, m;

    printf("Enter the dimensions of m*m matrix:");
    scanf("%d", &m);

    printf("Enter the elements of 1st Matrix:-\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of 2nd Matrix:-\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("\nAddition: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication: \n");
    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
        {
            c[i][j] = 0;

            for(k=0; k<m; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    printf("\n Transpose of Matrix A: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j] = a[j][i];
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    printf("\n Transpose of Matrix B: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j] = b[j][i];
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    return 0;

}