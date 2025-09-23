#include <stdio.h>
#include <stdlib.h>
#define USDtoMXN 18.30
#define MXNtoUSD 0.055
#define MXNtoEUR 0.052
#define EURtoMXN 21.61

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int opc;
    float a, res;

    printf("Enter the amount to convert: \n"); // <- Ask for user input
    scanf("%f", &a);                           // <- Storage the input for user

    printf("Choose 1. mts-cm 2. km-mts 3. cm-mts 4. mts-km \n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        res = a * 100;
        printf("%f mts converted to %f cm", a, res);
        break;
    case 2:
        res = a * 1000;
        printf("%f km converted to %f mts", a, res);
        break;
    case 3:
        res = a / 100;
        printf("%f cm converted to %f mts", a, res);
        break;
    case 4:
        res = a / 1000;
        printf("%f mts converted to %f km", a, res);
        break;
    default:
        res = a * 100;
        printf("%f mts converted to %f cm (default)", a, res);
        break;
    }

    // later I change this part to simplify the code

    int continueProgram = 1;

    printf("Do you want to convert other unity? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0)
    {
        return 0;
    }
    return main();
}