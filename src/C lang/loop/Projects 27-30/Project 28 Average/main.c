#include <stdio.h>
#include <stdlib.h>

/* * run this program using the console pauser or add your own getch, system("pause") or input loop * /
/* Calcular el promedio de n calificaciones */
int main() {
    int limit, i, x; // Declare limit and i
    float total = 0.0; // Declare total and x
    printf("How many grades do you need to average? \n");
    scanf("%d", &limit);
    printf("Enter the grades below:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &x); // Scan the input
        total += x; // Sum the x
    }

    total = total / (float) limit; // Convert limit int to float
    printf("The average is: %f\n", total); // Print total
    system("pause");
    return 0;
}