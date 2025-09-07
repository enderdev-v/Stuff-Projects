#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int l, result;
    printf("Enter the length of the side of the square: \n"); // <- Ask for user input
    scanf("%d", &l); // <- Storage the input for user
    result = l * l; // <- calc area
    printf("The area of square is: %d \n", result); // <- Final input :D

    int continueProgram = 1;

    printf("Do you want to calculate another area? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) {
        return 0;
    }
    return main();
}