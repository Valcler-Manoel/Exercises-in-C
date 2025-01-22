// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>

typedef struct
{
    int matricula;
    char nome[64];
    float notas[3];
    float notas_media;
} aluno_t;

int main(void)
{
    aluno_t aluno = {0};

    printf("Enter the information below:\n");
    printf("Enrollment number: ");
    scanf("%i", &aluno.matricula);
    fflush(stdin);

    printf("Name: ");
    scanf("%s", (char *)&aluno.nome);
    fflush(stdin);

    printf("Grade 01: ");
    scanf("%f", &aluno.notas[0]);
    fflush(stdin);

    printf("Grade 02: ");
    scanf("%f", &aluno.notas[1]);
    fflush(stdin);

    printf("Grade 03: ");
    scanf("%f", &aluno.notas[2]);
    fflush(stdin);

    aluno.notas_media = (aluno.notas[0] + aluno.notas[1] + aluno.notas[2]) / 3;
    printf("The 'aluno' structure occupies %li bytes\n", sizeof(aluno));

    return 0;
}
