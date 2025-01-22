// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>
#include <stdbool.h>

#define MATRIX_SIZE 2

bool is_prime(int value)
{
    if (value <= 1)
    {
        return false;
    }

    for (int i = 2; i <= value / 2; ++i)
    {
        if (value % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    int matrix[MATRIX_SIZE][MATRIX_SIZE] = {0};

    for (int i = 0; i < MATRIX_SIZE; ++i)
    {
        for (int j = 0; j < MATRIX_SIZE; ++j)
        {
            int temp = 0;
            do
            {
                printf("Enter the value of element [%i][%i]: ", i, j);
                scanf("%i", &temp);
            } while (temp < 0);
            matrix[i][j] = temp;
        }
    }

    for (int i = 0; i < MATRIX_SIZE; ++i)
    {
        for (int j = 0; j < MATRIX_SIZE; ++j)
        {
            if (!is_prime(matrix[i][j]))
            {
                printf("Not all elements of the matrix are prime\n");
                return 0;
            }
        }
    }
    printf("All elements of the matrix are prime\n");

    return 0;
}
