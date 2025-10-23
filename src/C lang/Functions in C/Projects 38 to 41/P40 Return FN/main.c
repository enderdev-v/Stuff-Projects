#include <stdio.h>
#include <stdlib.h>
int n;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Function getting Factorial

int factorial() {
    int n2 = 1, fact = 1;
    scanf("%d", &n);
    for (n2 = 1; n2 <= n; n2++) {
        fact = fact * n2;
    }
    
    return 0;
}


// Function main
int main(int argc, char argv[]) {
    printf("Hi, what number you want in factorial?\n");
    int fact = factorial();
    printf("The factorial of %d is: %d\n", n, fact);
    system("pause");
    return 0;
}