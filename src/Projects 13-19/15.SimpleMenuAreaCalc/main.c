#include <stdio.h>
#include <stdlib.h>
#define MathPI 3.141592653

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Reviewed ✅

int main()
{
    int opc;
    double a, b, c, res;
    printf("Choose 1. Square 2. Rectangle 3. Circle 4. Trapeze\n");
    scanf("%d", &opc);
    switch (opc) {
    case 1:
        printf("Tell me the lenght of the side of Square\n");
        scanf("%lf", &a);
        res = a * a;
        printf("The Are of Square is: %lf\n", res);
        break;
    case 2:
        printf("Tell me the lenght of two sides of Rectangle\n");
        scanf("%lf%lf", &a, &b);
        res = a * b;
        printf("The Are of Square is: %lf\n", res);
        break;
    case 3:
        printf("Tell me the radio of Circle\n");
        scanf("%lf", &a);
        res = (a * a) * MathPI;
        printf("The Are of Square is: %lf\n", res);
        break;
    case 4:
        printf("Base Major:\n");
        scanf("%lf", &a); // <- Storage the input for user
        printf("Base Minor:\n");
        scanf("%lf", &b); // <- Storage the input for user
        printf("Height:\n");
        scanf("%lf", &c);           // <- Storage the input for user
        res = ((a + b) * c) / 2; // <- calc area
        printf("The area of trapeze is: %lf \n", res);
        break;
    default:
        printf("I have a error try later\n");
        break;
    }

    int continueProgram = 1;

    printf("Do you want to calculate another area? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) {
        return 0;
    }
    return main();
}