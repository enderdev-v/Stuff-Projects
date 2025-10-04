#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int n1, n2, n3, aux; // n1 < n2 < n3
    printf("Enter three integers: \n");

    scanf("%d%d%d", &n1, &n2, &n3);
    
    printf("The Original input %d %d %d\n", n1, n2, n3);
    
    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n2 > n3) {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    
    
    printf("The final result is  %d %d %d\n", n1, n2, n3);
    

    int continueProgram = 1;

    printf("Do you want to continue? (1 for yes, 0 for no): \n ");

    scanf("%d", &continueProgram);
    if (continueProgram == 0) return 0;
    return main();
}