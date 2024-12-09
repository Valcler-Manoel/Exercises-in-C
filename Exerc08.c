/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 09/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main(void)
{
    float salario;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if (salario > 3550.00)
    {
        salario *= 1.1;
    }
    else if (salario > 2400.00)
    {
        salario *= 1.15;
    }
    else if (salario > 1100.00)
    {
        salario *= 1.2;
    }
    else if (salario > 600.00)
    {
        salario *= 1.25;
    }
    else
    {
        salario *= 1.3;
    }

    printf("Seu novo salario e de: R$ %.0f\n", salario);
    system("pause");
    return 0;
}