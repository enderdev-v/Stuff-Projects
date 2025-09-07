#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int number;
    printf("Enter a number that you want and I check is positive or negative\n"); // <- Ask for user input
    scanf("%d", &number);                                                         // <- Storage the input for user
    if (!(number > 0))
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is positive\n");
    }

    int continueProgram = 1;

    printf("Another number check? (1 for Yes / 0 for No): ");
    scanf("%d", &continueProgram);
    if (continueProgram == 0)
    {
        return 0;
    }
    return main();
}