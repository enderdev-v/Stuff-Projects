#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int continueApp = 1;
    while (continueApp != 0)
    {
        double n;
        int pow, i = 1, aux;
        printf("Please Enter the base\n");
        scanf("%lf", &n);
        printf("Please Enter the exponent\n");
        scanf("%d", &pow);
        aux = pow;
        if (pow == 0) n = 1;
        if (pow < 0) pow = pow * -1;
        while (i < pow) {
            n = n * n;
            i++;
        } 
        if (aux < 0) n = 1 / n;
        printf("Result: %lf\n", n);
        printf("Do you want to continue? (1 for yes, 0 for no): \n ");
        scanf("%d", &continueApp);
        while (continueApp != 0 && continueApp != 1)
        {
            printf("Invalid input. Please enter 1 for yes or 0 for no: \n");
            scanf("%d", &continueApp);
        }
    }
    return 0;
}