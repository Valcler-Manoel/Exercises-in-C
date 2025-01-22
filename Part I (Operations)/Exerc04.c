/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 09/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main()
{
    int n1;

    printf("SABER SE UM NUMERO E PAR OU IMPAR\n\n");
    printf("Digite qualquer numero: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0)
    {
        printf("O numero e par.\n");
        printf("Numero escolhido: %d\n", n1);
    }
    else
    {
        printf("O numero e impar!\n");
        printf("Numero escoldido: %d\n", n1);
    }
    system("pause");
    return 0;
}
