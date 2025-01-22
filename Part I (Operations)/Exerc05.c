/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 08/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main()
{
    float n1, n2, resultado;
    char operador;

    printf("CALCULADORA BASICA ENTRE DOIS NUMEROS\n");
    printf("Digite qual operacão voce quer realizar (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch (operador)
    {
    case '+':
        resultado = n1 + n2;
        printf("Calculo: %.0f %c %.0f = %.0f\n", n1, operador, n2, resultado);
        break;

    case '-':
        resultado = n1 - n2;
        printf("Calculo: %.0f %c %.0f = %.0f\n", n1, operador, n2, resultado);
        break;

    case '*':
        resultado = n1 * n2;
        printf("Calculo: %.0f %c %.0f = %.0f\n", n1, operador, n2, resultado);
        break;

    case '/':
        if (n2 != 0)
        {
            resultado = n1 / n2;
            printf("Calculo: %.0f %c %.0f = %.0f\n", n1, operador, n2, resultado);
        }
        else
        {
            printf("Divisao por zero nao existe\n");
        }
        break;

    default:
        printf("Operador invalido! Tente novamente com (+, -, *, /).\n");
        break;
    }
    system("pause");
    return 0;
}
