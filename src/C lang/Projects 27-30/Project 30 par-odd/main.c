#include <stdio.h>
#include <stdlib.h>

/* * run this program using the console pauser or add your own getch, system("pause") or input loop * /
/* Calcular el promedio de n calificaciones */
int main() {
    int limit, i, par, odd = 1; // Declare limit and i
    printf("What the limit for this? \n");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++) {
        if (i % 2 != 0) odd *= i; 
        else par += i; 
    }
    printf("The final product of odd numbers is: %d\n", odd); 
    printf("The sum of even numbers is: %d\n", par); 
    system("pause");
    return 0;
}