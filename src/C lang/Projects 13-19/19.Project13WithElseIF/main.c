#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Reviewed ✅

int main()
{
    int opc, a, b, res;
    printf("Elige 1.Suma  2.Resta \n"); // Ask user Input
    scanf("%d", &opc);
    if (opc == 1) {
         printf("Dame dos valores\n");
        scanf("%d%d", &a, &b);
        res = a + b;
        printf("El resultado de la suma es: %d\n", res);
    } else if (opc == 2) {
        printf("Dame dos valores\n");
        scanf("%d%d", &a, &b);
        res = a - b;
        printf("El resultado de la resta es: %d\n", res);
    } else {
        printf("No existe tal operacion\n");
    }

    int continueProgram = 1;

    printf("Do you want to continue? (1 for yes, 0 for no): \n ");

    scanf("%d", &continueProgram);
    if (continueProgram == 0)
        return 0;

    return main();
}