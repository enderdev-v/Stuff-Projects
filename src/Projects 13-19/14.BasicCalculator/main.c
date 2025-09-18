#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int opc;
    float a, b, res;
    printf("Dame dos valores\n");
    scanf("%f%f", &a, &b);
    printf("Elige 1.Suma 2.Resta 3.Multiplicación 4.División\n");
    scanf("%d", &opc);
    switch (opc)
    {
        case 1: res = a + b; printf("El resultado de la suma es %.2f\n", res);
        break;
        case 2: res = a - b; printf("El resultado de la resta es %.2f\n", res);
        break;
        case 3: res = a * b; printf("El resultado de la multiplicación es %.2f\n", res);
        break;
        case 4: res = a / b; printf("El resultado de la división es %.2f\n", res);
        break;
        default: printf("No existe tal operación\n");
    }
    return 0;

    int continueProgram = 1;

    printf("Do you want to calculate another area? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) {
        return 0;
    }
    return main();
}