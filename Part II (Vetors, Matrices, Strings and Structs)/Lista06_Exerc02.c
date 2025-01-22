// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>
#include <locale.h>

#define ARRAY_ELEMENTS 10
int array[ARRAY_ELEMENTS] = {0};

int array_max(void)
{
    int max = 0;
    for (int i = 0; i < ARRAY_ELEMENTS; ++i)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int array_min(void)
{
    int min = array[0];
    for (int i = 1; i < ARRAY_ELEMENTS; ++i)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

int array_sum(void)
{
    int sum = 0;
    for (int i = 0; i < ARRAY_ELEMENTS; ++i)
    {
        sum += array[i];
    }
    return sum;
}

float array_average(void)
{
    float sum = 0;
    for (int i = 0; i < ARRAY_ELEMENTS; ++i)
    {
        sum += (float)array[i];
    }
    return sum / ARRAY_ELEMENTS;
}

int main(void)
{

    for (int i = 0; i < ARRAY_ELEMENTS; ++i)
    {
        int temp = 0;

        do
        {
            printf("Enter a number >= 0 for the %ith value:", i + 1);
            fflush(stdout);
            scanf("%i", &temp);
        } while (temp < 0);

        array[i] = temp;
    }

    printf("Largest value: %i\n", array_max());
    printf("Smallest value: %i\n", array_min());
    printf("Sum of values: %i\n", array_sum());
    printf("Average of values: %.3f\n", array_average());
    printf("array = {");
    for (int i = ARRAY_ELEMENTS - 1; i > 0; --i)
    {
        printf("%i,", array[i]);
    }
    printf("%i}\n", array[0]);

    return 0;
}
