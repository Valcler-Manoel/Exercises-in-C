// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>
#include <stdlib.h>

int n = 0;                // Number of rows and columns in matrix
int **matrix = NULL;      // Matrix pointer
int **temp_matrix = NULL; // Temporary matrix pointer

void get_cofactor(int p, int q, int n)
{
    int i = 0, j = 0;

    // Looping through the matrix to find the cofactor
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp_matrix[i][j++] = matrix[row][col];

                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int matrix_determinant(int n)
{
    int determinant = 0;

    // Base case for 1x1 matrix
    if (n == 1)
    {
        return matrix[0][0];
    }

    // Base case for 2x2 matrix (det = ad - bc)
    if (n == 2)
    {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    // To store sign multiplier
    int sign = 1;

    // Iterate over the first row
    for (int f = 0; f < n; f++)
    {
        // Get cofactor of matrix[0][f]
        get_cofactor(0, f, n);

        // Recursive call to calculate determinant of submatrix
        determinant += sign * matrix[0][f] * matrix_determinant(n - 1);

        // Alternate the sign
        sign = -sign;
    }

    return determinant;
}

int main(void)
{
    // Ask for the matrix size
    do
    {
        printf("Enter the size of the matrix (n x n): ");
        scanf("%i", &n);
    } while (n <= 0); // Ensure n is a positive integer

    // Allocate memory for matrices
    matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    temp_matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i)
    {
        temp_matrix[i] = (int *)malloc(n * sizeof(int));
    }

    // Populate the matrix with user input
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("Enter the value of element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and display the determinant
    printf("Matrix determinant: %d\n", matrix_determinant(n));

    // Free allocated memory
    for (int i = 0; i < n; ++i)
    {
        free(matrix[i]);
        free(temp_matrix[i]);
    }
    free(matrix);
    free(temp_matrix);

    return 0;
}
