/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 08/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main()
{
    float n1, n2, media;

    printf("CALCULAR A MEDIA DO ALUNO\n");
    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 6)
    {
        printf("Parabens, você passou!\n");
        printf("Sua média foi: %.2f\n", media);
    }
    else
    {
        printf("Voce reprovou.\n");
        printf("Sua media foi: %.2f\n", media);
    }
    system("pause");
    return 0;
}
