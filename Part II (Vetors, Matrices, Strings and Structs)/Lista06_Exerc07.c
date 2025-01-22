// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char array[100] = {0};

bool is_palindrome(void)
{
    printf("%li\n", strlen(array));
    int start_index = 0;
    int end_index = (int)strlen(array) - 1;

    while (start_index <= (int)strlen(array) && end_index >= 0)
    {
        if (array[start_index] != array[end_index])
        {
            return false;
        }
        ++start_index;
        --end_index;
    }

    return true;
}

int main(void)
{
    printf("-- Palindrome Check --\n");
    printf("Text: ");
    fgets(array, sizeof(array), stdin);
    array[strcspn(array, "\n")] = '\0';

    if (is_palindrome())
    {
        printf("\"%s\" is a palindrome\n", array);
    }
    else
    {
        printf("\"%s\" is not a palindrome\n", array);
    }

    return 0;
}
