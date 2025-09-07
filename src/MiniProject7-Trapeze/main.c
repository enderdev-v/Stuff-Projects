#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    double B, b, h, result;
    printf("Enter the next values: \n"); // <- Ask for user input

    printf("Base Major:\n");
    scanf("%lf", &B); // <- Storage the input for user
    printf("Base Minor:\n");
    scanf("%lf", &b); // <- Storage the input for user
    printf("Height:\n");
    scanf("%lf", &h); // <- Storage the input for user
    result = ((B + b) *h) / 2; // <- calc area
    printf("The area of trapeze is: %f \n", result); // <- Final input :D

    int continueProgram = 1;

    printf("Do you want to calculate another area? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) {
        return 0;
    }
    return main();
}