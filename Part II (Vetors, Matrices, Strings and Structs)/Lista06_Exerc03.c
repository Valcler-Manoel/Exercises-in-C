// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int l, c;

    printf("Enter the number of rows (l): ");
    scanf("%d", &l);
    printf("Enter the number of columns (c): ");
    scanf("%d", &c);

    int **matrix = (int **)malloc(l * sizeof(int *));
    for (int i = 0; i < l; i++)
    {
        matrix[i] = (int *)malloc(c * sizeof(int));
    }

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Value [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix entered:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
