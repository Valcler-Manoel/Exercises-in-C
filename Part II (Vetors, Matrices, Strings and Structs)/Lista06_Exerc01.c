// Válcler Manoel Vieira Camelo Maia
// Matrícula: 576040
// Data: 20/01/2025

#include <stdio.h>
 
void print_space(int i)
{
    while(i != 0) {
        putc(' ', stdout);
        --i;
    }
}
 
int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
 
    for (int i = 0; i < (int)(sizeof(array)/sizeof(array[0])); ++i) {
        print_space(i);
        printf("%i\n", array[i]);
    }
 
    return 0;
}