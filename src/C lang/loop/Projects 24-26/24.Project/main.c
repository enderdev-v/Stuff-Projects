#include <stdio.h>
#include <stdlib.h>
#define lim 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int contapp = 1;
    while (contapp != 0)
    {
        int num = 1;

        do
        {
            printf("%d\n", num);
            num++;
        } while (num <= lim);

        return (0);
        printf("Do you want to continue? (1 for yes, 0 for no)\n");
        scanf("%d", &contapp);
    }
    return 0;
}