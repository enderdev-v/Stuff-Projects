#include <stdio.h>
#include <stdlib.h>
#define MathPI 3.141592653

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    char opc;
    float a, b, c, res;

    printf("Choose S. Square R. Rectangle C. Circle T. Trapeze\n");
    scanf("%c", &opc);
    switch (opc)
    {
    case 'S':
        printf("Tell me the lenght of the side of Square\n");
        scanf("%f", &a);
        res = a * a;
        printf("The Are of Square is: %d\n", res);
        break;
    case 'R':
        printf("Tell me the lenght of two sides of Rectangle\n");
        scanf("%f%f", &a);
        res = a * b;
        printf("The Are of Square is: %d\n", res);
        break;
    case 'C':
        printf("Tell me the radio of Circle\n");
        scanf("%f", &a);
        res = (a * a) * MathPI;
        printf("The Are of Square is: %d\n", res);
        break;
    case 'T':

        printf("Base Major:\n");
        scanf("%lf", &a); // <- Storage the input for user
        printf("Base Minor:\n");
        scanf("%lf", &b); // <- Storage the input for user
        printf("Height:\n");
        scanf("%lf", &c);           // <- Storage the input for user
        res = ((a + b) * c) / 2; // <- calc area
        printf("The area of trapeze is: %f \n", res);
        break;
    default:
        printf("I have a error try later\n");
    }
    return 0;

    int continueProgram = 1;

    printf("Do you want to calculate another area? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0)
    {
        return 0;
    }
    return main();
}