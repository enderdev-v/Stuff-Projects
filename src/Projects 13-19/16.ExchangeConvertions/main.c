#include <stdio.h>
#include <stdlib.h>
#define USDtoMXN 18.30
#define MXNtoUSD 0.055
#define MXNtoEUR 0.052
#define EURtoMXN 21.61

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    char opc;
    double a, res;
    char text[] = "USD to MXN";

    printf("Enter the amount to convert: \n"); // <- Ask for user input
    scanf("%lf", &a);                          // <- Storage the input for user

    printf("Choose 1. USDtoMXN 2. MXNtoUSD 3. EURtoMXN 4. MXNtoEur\n");
    scanf("%c", &opc);
    switch (opc)
    {
    case 1:
        res = a * USDtoMXN;
        printf("$%.2lf USD is equal to $%.2lf MXN\n", a, res);
        break;
    case 2:
        res = a * MXNtoUSD;
        printf("$%.2lf MXN is equal to $%.2lf USD\n", a, res);
        break;
    case 3:
        res = a * EURtoMXN;
        printf("$%.2lf EUR is equal to $%.2lf MXN\n", a, res);
        break;
    case 4:
        res = a * MXNtoEUR;
        printf("$%.2lf MXN is equal to $%.2lf EUR\n", a, res);
        break;
    default:
        res = 0;
        printf("Invalid option\n");
        break;
    }
    return 0;

    // later I change this part to simplify the code 

    int continueProgram = 1;

    printf("Do you want to calculate another area? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0)
    {
        return 0;
    }
    return main();
}