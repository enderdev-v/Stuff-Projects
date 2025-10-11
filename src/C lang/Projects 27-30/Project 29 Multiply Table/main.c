#include <stdio.h>
#include <stdlib.h>

/*  run this program using the console pauser or add your own getch, system("pause") or input loop * /
/* Calcular el promedio de n calificaciones */

int main(int argc, char *argv[]) {
    int limit, i, x;
    printf("Give me a number and I will show the multiplication table you want\n");
    scanf("%d", &x);
    printf("Give me the limit for the table\n");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++) {
        printf("%d * %d = %d\n", x, i, x * i);
    }
    return 0;
}