#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Function getting Factorial

int menu()
{

    int opc;
    double a, b, res;

    printf("Tell me the first value\n");
    scanf("%lf", &a);

    printf("Choose 1. Exponent 2. Squareroot 3. Cosine 4. Logarithm \n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        printf("Tell me the second value");
        scanf("%lf", &b);
        res = pow(a, b);
        printf("The result of the Exponent is %lf\n", res);
        break;
    case 2:
        res = sqrt(a);
        printf("The result of the Squareroot is %lf\n", res);
        break;
    case 3:
        res = cos(a);
        printf("The result of the Cosine is %lf\n", res);
        break;
    case 4:
        res = log(a);
        printf("The result of the Logarithm is %lf\n", res);
        break;
    default:
        printf("The operation doesn't exist\n");
        break;
    }
    
}

// Function main
int main(int argc, char argv[])
{
    menu();
    system("pause");
    return 0;
}