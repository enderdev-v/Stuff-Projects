#include <stdio.h>
#include <stdlib.h>
#define MathPI 3.141592653

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    double r, result;
    printf("Enter the radio of circle:\n"); // <- Ask for user input
    scanf("%lf", &r); // <- Storage the input for user
    result = r * r; // <- calc area
    result *= MathPI; // <- calc area
    printf("The area of circle is: %f \n", result); // <- Final input :D

    int continueProgram = 1;

    printf("Do you want to calculate another area? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) {
        return 0;
    }
    return main();
}