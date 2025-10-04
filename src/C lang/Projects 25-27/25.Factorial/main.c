#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int contapp = 1;
    while (contapp != 0) {
        int n, n2, fact;
        printf("Hi, what number you want in factorial?\n");
        scanf("%d", &n);
        fact = 1;
        n2 = 1;
        do {
            fact = fact * n2;
            n2++;
        } while (n2 <= n);
        printf("The factorial of %d is: %d\n", n, fact);
        printf("Do you want to continue? (1 for yes, 0 for no)\n");
        scanf("%d", &contapp);
        
    }
    return 0;
}