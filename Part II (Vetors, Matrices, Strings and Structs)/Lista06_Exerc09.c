// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char full_name[50];
    unsigned int phone;
    char address[256];
} registration_t;

registration_t *registration = NULL;

void populate_registration(int element_index)
{
    printf("-- Registration No.%i --\n", element_index + 1);

    getchar(); // Clears the buffer
    printf("Full name: ");
    fgets(registration[element_index].full_name, sizeof(registration[element_index].full_name), stdin);
    registration[element_index].full_name[strcspn(registration[element_index].full_name, "\n")] = '\0'; // Remove the '\n' at the end

    printf("Phone: ");
    scanf("%u", &registration[element_index].phone);
    getchar(); // Clears the '\n' after scanf

    printf("Address: ");
    fgets(registration[element_index].address, sizeof(registration[element_index].address), stdin);
    registration[element_index].address[strcspn(registration[element_index].address, "\n")] = '\0'; // Remove the '\n' at the end
}

void print_registration(int element_index)
{
    printf("-- Registration No.%i --\n", element_index + 1);
    printf("Full name: %s\n", registration[element_index].full_name);
    printf("Phone: %i\n", registration[element_index].phone);
    printf("Address: %s\n", registration[element_index].address);
}

int main(void)
{
    int n = 0;
    do
    {
        printf("Enter a number greater than 0 and less than 6: ");
        scanf("%i", &n);
    } while (n < 0 || n > 5);

    registration = calloc(n, sizeof(*registration));
    for (int i = 0; i < n; ++i)
    {
        populate_registration(i);
    }

    for (int i = 0; i < n; ++i)
    {
        print_registration(i);
    }

    return 0;
}
