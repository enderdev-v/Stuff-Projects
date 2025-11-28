#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Function getting Factorial

double menu();

// Function main
int main(int argc, char argv[])
{
    double res = menu();
    
    if (res == NAN) {
        printf("The operation doesn't exist\n");
    } else {
        printf("The result is: %lf\n", res);
    }
    
    system("pause");
    return 0;
}


// Functions 

double menu() {
    int opc;
    double a, b;
    printf("Tell me the first value\n");
    scanf("%lf", &a);
    printf("Choose 1. Exponent 2. Squareroot 3. Cosine 4. Logarithm \n");
    scanf("%d", &opc);
    switch (opc) {
    case 1:
        printf("Tell me the second value\n");
        scanf("%lf", &b);
        return pow(a, b);
        break;
    case 2:
        return sqrt(a);
        break;
    case 3:
        return cos(a);
        break;
    case 4:
        return log(a);
        break;
    default:  
        return NAN;  
        break;
    }
}