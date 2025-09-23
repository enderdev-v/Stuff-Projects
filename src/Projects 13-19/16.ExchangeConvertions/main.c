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
    double a, res;

    printf("Enter the amount to convert: \n"); // <- Ask for user input
    scanf("%lf", &a);                          // <- Storage the input for user

    printf("Choose 1. USDtoMXN 2. MXNtoUSD 3. EURtoMXN 4. MXNtoEur\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        res = a * USDtoMXN;
        printf("%lf USD in MXN is %lf", a, res);
        break;
    case 2:
        res = a * MXNtoUSD;
        printf("%lf MXN in USD is %lf", a, res);
        break;
    case 3:
        res = a * EURtoMXN;
        printf("%lf EUR in MXN is %lf", a, res);
        break;
    case 4:
        res = a * MXNtoEUR;
        printf("%lf MXN in EUR is %lf", a, res);
        break;
    default:
        res = a * USDtoMXN;
        printf("%lf (Default Option) USD in MXN is %lf", a, res);
        break;
    }

    // later I change this part to simplify the code

    int continueProgram = 1;

    printf("Do you want to calculate another convertion? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0)
    {
        return 0;
    }
    return main();
}