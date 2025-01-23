/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 08/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main()
{
    float n1, n2, result;
    char operator;

    printf("SIMPLE CALCULATOR\n");
    printf("Enter the operation you want to use (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Type the first number: ");
    scanf("%f", &n1);
    printf("Type the second number: ");
    scanf("%f", &n2);

    switch (operator)
    {
    case '+':
        result = n1 + n2;
        printf("Result: %.0f %c %.0f = %.0f\n", n1, operator, n2, result);
        break;

    case '-':
        result = n1 - n2;
        printf("Result: %.0f %c %.0f = %.0f\n", n1, operator, n2, result);
        break;

    case '*':
        result = n1 * n2;
        printf("Result: %.0f %c %.0f = %.0f\n", n1, operator, n2, result);
        break;

    case '/':
        if (n2 != 0)
        {
            result = n1 / n2;
            printf("Result: %.0f %c %.0f = %.0f\n", n1, operator, n2, result);
        }
        else
        {
            printf("Division by zero doens't exist\n");
        }
        break;

    default:
        printf("Wrong operator! Try again with: (+, -, *, /).\n");
        break;
    }
    system("pause");
    return 0;
}
