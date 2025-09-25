#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int ed;
    printf("Dame tu edad\n"); // <- Ask for user input
    scanf("%d", &ed); // <- Storage the input for user
    if (ed < 18) {
        printf("Eres menor de edad\n"); // <- If true
        printf("No puedes votar\n"); // <- If true
    } else {
        printf("Eres mayor de edad\n"); // <- If false
        printf("Puedes votar\n"); // <- If false
    }

    printf("Que tengas buen dia \n"); 
    

    // end of spanish part ;D

    int continueProgram = 1;

    printf("You put wrong age? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) {
        return 0;
    }
    return main();
}