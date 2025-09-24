#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Reviewed ✅

int main()
{
    int opc, a, b, res;
    printf("Elige 1.Suma  2.Resta \n"); // Ask user Input
    scanf("%d", &opc);                  // Store user Input

    switch (opc)
    {
    case 1:
        printf("Dame dos valores\n");
        scanf("%d%d", &a, &b);
        res = a + b;
        printf("El resultado de la suma es: %d\n", res);

        break;
    case 2:
        printf("Dame dos valores\n");
        scanf("%d%d", &a, &b);
        res = a - b;
        printf("El resultado de la resta es: %d\n", res);

        break;

    default:
        printf("No existe tal operacion\n");
        break;
    }

    int continueProgram = 1;

    scanf("%d", &continueProgram);
    if (continueProgram == 0)
        return 0;

    return main();
}