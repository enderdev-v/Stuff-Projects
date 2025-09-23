#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int opc;
    double a, b, res;

    printf("Tell me the first value\n");
    scanf("%lf", &a);

    printf("Elige 1. Addition 2. Substract 3. Multiplication 4. Division 5. Exponent, 6. Squareroot, 7. Sine, 8. Cosine, 9. Logarithm \n");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            res = a + b;
            printf("The result of the Addition is %lf\n", res);
            break;
        case 2:
            res = a - b;
            printf("The result of the Substraction is %lf\n", res);
            break;
        case 3:
            res = a * b;
            printf("The result of the Multiplication is %lf\n", res);
            break;
        case 4:
            res = a / b;
            printf("The result of the Division is %lf\n", res);
            break;
        case 5:
            printf("Tell me the second value");
            scanf("%lf", &b);
            res = pow(a, b);
            printf("The result of the Exponent is %lf\n", res);
            break;
        case 6:
            res = sqrt(a);
            printf("The result of the Squareroot is %lf\n", res);
            break;
        case 7:
            res = sin(a);
            printf("The result of the Sine is %lf\n", res);
            break;
        case 8:
            res = cos(a);
            printf("The result of the Cosine is %lf\n", res);
            break;
        case 9:
            res = log(a);
            printf("The result of the Logarithm is %lf\n", res);
            break;
        default:
            printf("No existe tal operación\n");
            break;
    }

    // Yep i think is other way to create this xd

    int continueProgram = 1;

    printf("Do you want to use calculator again? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) {
        return 0;
    }
    return main();

    return 0;
}
    