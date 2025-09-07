#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int n;
    printf("Enter a number that you want and check is even or odd\n"); // <- Ask for user input
    scanf("%d", &n); // <- Storage the input for user
    if (n % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
    

    int continueProgram = 1;

    printf("Do you want to check another number? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) {
        return 0;
    }
    return main();
}