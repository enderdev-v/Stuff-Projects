#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Function getting Factorial

double menu() {

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
        break;
    case 2:
        res = sqrt(a);
        break;
    case 3:
        res = cos(a);
        break;
    case 4:
        res = log(a);
        break;
    default:    
        res = NAN;
        break;
    }
    return res;
}

// Function main
int main(int argc, char argv[])
{
    double res = menu();
    
    if (res = NAN) {
        printf("The operation doesn't exist\n");
    } else {
        printf("The result is: %d", res);
    }
    
    system("pause");
    return 0;
}