#include <stdio.h>
#include <stdlib.h>
int n;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Function getting Factorial


int factorial();


// Function main
int main(int argc, char argv[]) {
    printf("Hi, what number you want in factorial?\n");
    int fact = factorial();
    printf("The factorial of %d is: %d\n", n, fact);
    system("pause");
    return 0;
}

// functions
int factorial() {
    int i, fact = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}