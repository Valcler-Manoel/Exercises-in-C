/*
 Válcler Manoel Vieira Camelo Maia
 Matrícula: 576040
 Data: 08/12/2024
 Aplicativo: Visual Studio Code
*/

#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if (n2 != 0 && n1 % n2 == 0)
        printf("%d e divisivel por %d\n", n1, n2);

    else
        printf("%d nao e divisivel por %d\n", n1, n2);
    system("pause");
    return 0;
}
