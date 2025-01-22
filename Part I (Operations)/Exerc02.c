/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 08/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0)
        printf("O numero e positivo\n");

    else if (n == 0)
        printf("O numero e igual a 0\n");

    else
        printf("O numero e negativo\n");
    system("pause");
    return 0;
}
