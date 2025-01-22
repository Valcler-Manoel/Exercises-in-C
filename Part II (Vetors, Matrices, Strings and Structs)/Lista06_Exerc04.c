// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int l, c;

    printf("Enter the number of rows for the first matrix (l): ");
    scanf("%d", &l);
    printf("Enter the number of columns for the first matrix (c): ");
    scanf("%d", &c);

    double **matrixA = (double **)malloc(l * sizeof(double *));
    double **matrixB = (double **)malloc(c * sizeof(double *));
    double **matrix_result = (double **)malloc(l * sizeof(double *));

    for (int i = 0; i < l; i++)
    {
        matrixA[i] = (double *)malloc(c * sizeof(double));
        matrix_result[i] = (double *)malloc(l * sizeof(double));
    }
    for (int i = 0; i < c; i++)
    {
        matrixB[i] = (double *)malloc(l * sizeof(double));
    }

    printf("\nEnter the elements of matrix A (%dx%d):\n", l, c);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &matrixA[i][j]);
        }
    }

    printf("\nEnter the elements of matrix B (%dx%d):\n", c, l);
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            matrix_result[i][j] = 0;
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < c; k++)
            {
                matrix_result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("\nResulting Matrix (%dx%d):\n", l, l);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%.2lf\t", matrix_result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l; i++)
    {
        free(matrixA[i]);
        free(matrix_result[i]);
    }
    for (int i = 0; i < c; i++)
    {
        free(matrixB[i]);
    }
    free(matrixA);
    free(matrixB);
    free(matrix_result);

    return 0;
}
