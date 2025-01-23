/*
 Válcler Manoel Vieira Camelo Maia
 Student ID: 576040
 Date: 12/08/2024
 App: Visual Studio Code
*/

#include <stdio.h>

int main()
{
    int n1;

    printf("DISCOVER IF THE NUMBER IS ODD OR EVEN\n\n");
    printf("Type a number: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0)
    {
        printf("The number is even!\n");
        printf("Number chosen: %d\n", n1);
    }
    else
    {
        printf("The number is odd!\n");
        printf("Number chosen: %d\n", n1);
    }
    system("pause");
    return 0;
}
