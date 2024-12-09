/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 09/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main(void)
{
    int s1;
    int s2;
    int s3;

    printf("Digite o primeiro segmento de reta:\n");
    scanf("%d", &s1);
    printf("Digite o segundo segmento de reta:\n");
    scanf("%d", &s2);
    printf("Digite o terceiro segmento de reta:\n");
    scanf("%d", &s3);

    int triangulo = (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) ? 1 : 0;
    if (triangulo)
    {
        printf("Esse triangulo existe, ele e do tipo:");

        if (s1 == s2 && s2 == s3)
        {
            printf(" Equilatero\n");
        }
        else if (s1 != s2 && s2 != s3)
        {
            printf(" Escaleno\n");
        }
        else if (s1 == s2 || s1 == s3 || s2 == s3 || s2 == s1)
        {
            printf(" Isosceles\n");
        }
    }
    else
    {
        printf("Esse triangulo nao existe!\n");
    }
    system("pause");
    return 0;
}