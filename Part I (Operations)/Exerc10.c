/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 09/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main(void)
{
    float n1;
    float n2;
    float peso1;
    float peso2;
    float media;

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite o peso da primeira prova: \n");
    scanf("%f", &peso1);
    printf("Digite o peso da segunda prova: \n");
    scanf("%f", &peso2);

    media = ((n1 * peso1) + (n2 * peso2)) / (peso1 + peso2);
    if (media >= 7.0)
    {
        printf("Voce foi provado\n");
        printf("Media final: %f\n", media);
    }
    else if (media < 7.0 && media >= 4.0)
    {
        printf("Voce ficou de AF!\n");
        printf("Media final: %f\n", media);
    }
    else
    {
        printf("Reprovado\n");
    }
    system("pause");
    return 0;
}