// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>

typedef struct
{
    int x;
    int y;
} coords_t;

int main(void)
{
    coords_t coords = {.x = 0, .y = 0};

    printf("Enter the coordinates values...\n");
    printf("x: ");
    scanf("%i", &coords.x);
    printf("y: ");
    scanf("%i", &coords.y);

    printf("Distance between {0, 0} and the given coordinates:\n");
    printf("x: %i\n", coords.x);
    printf("y: %i\n", coords.y);

    return 0;
}
