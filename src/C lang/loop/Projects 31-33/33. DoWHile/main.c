#include <stdio.h>
#include <stdlib.h>

/* * run this program using the console pauser or add your own getch, system("pause") or input loop * /
/* Tabla del multiplicar del 10 */
int main() {
    int i = 1, j; // Declare limit and i
    do {
        j = 1;
        printf("\e[1;34m"); // <-- Bold Text
        printf("Tabla del %d\n", i);
        printf("\n");
        printf("\e[m"); // <-- Reset Text
       do
        {
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        } while (j < 13);
        printf("\n\n");
        i++;
    } while (i < 11);
    
    system("pause");
    return 0;
}