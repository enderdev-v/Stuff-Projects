#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int n = 105, continueProgram;
    printf("This program prints all odd numbers from 105 to 1.\n");
    while (n >= 1)
    {
      if (n % 2 != 0) {
        printf("%d\n", n);
      }
      n--;
    }
    printf("Enter a positive integer (or a non-positive integer to exit) or 0 to continue:\n");
    scanf("%d", &continueProgram);
    if (continueProgram == 0) return 0;

    return main();
}