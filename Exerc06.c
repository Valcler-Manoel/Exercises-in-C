/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 08/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main()
{
    char senhaCorreta[] = "abacate";
    char senhaDigitada[20];
    int senhaValida = 0;

    do
    {
        printf("Digite a senha: ");
        scanf("%s", senhaDigitada);

        senhaValida = 1;
        for (int i = 0; senhaCorreta[i] != '\0' || senhaDigitada[i] != '\0'; i++)
        {
            if (senhaCorreta[i] != senhaDigitada[i])
            {
                senhaValida = 0;
                break;
            }
        }

        if (senhaValida)
        {
            printf("ACESSO PERMITIDO\n");
        }
        else
        {
            printf("ACESSO NEGADO\n");
            printf("Tente novamente!\n");
        }

    } while (!senhaValida);
    system("pause");
    return 0;
}
