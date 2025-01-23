/*
 Válcler Manoel Vieira Camelo Maia
 Student ID: 576040
 Date: 12/08/2024
 App: Visual Studio Code
*/

#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float media;

    printf("CALCULATE STUDENT AVERAGE\n\n");
    printf("Type your first grade: ");
    scanf("%f", &n1);
    printf("Type your second grade: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 6)
    {
        printf("Congratulations! You passed!\n");
        printf("Your average was: %.2f\n", media);
    }
    else
    {
        printf("You failed.\n");
        printf("Your average was: %.2f\n", media);
    }
    system("pause");
    return 0;
}
