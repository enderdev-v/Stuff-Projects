#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int contapp = 1;
    while (contapp != 0) {
        int n = 1, number = 7, lim;
        printf("Hi, what number is limit in the multiplication table\n");
        scanf("%d", &lim);
        
        do {
            printf("%d * %d = %d\n", number, n, number * n);
            n++;
        } while (n <= lim);
        printf("Do you want to continue? (1 for yes, 0 for no)\n");
        scanf("%d", &contapp);
        
    }
    return 0;
}