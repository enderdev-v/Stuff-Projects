#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int n1, n2, n3;
    printf("put three numbers and I check the major of three\n"); // <- Ask for user input
    scanf("%d%d%d", &n1, &n2, &n3); // <- Storage the input for user

    if (n1 > n2 && n1 > n3) {
        printf("The major number is: %d\n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("The major number is: %d\n", n2);
    } else if (n3 > n1 && n3 > n1) {
        printf("The major number is: %d\n", n3);
    } else {
        printf("I have a error pls try again\n");
    }
    
    /* 
    Sorry I think the better option is other but this is only for nerfing me ok no xd
    but if could use it I will do it 
    maybe in the future
    and yep I can try to do it more better that way to this xd
    
    */
    int continueProgram = 1;

    printf("Do you want to check another numbers? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) {
        return 0;
    }
    return main();
}