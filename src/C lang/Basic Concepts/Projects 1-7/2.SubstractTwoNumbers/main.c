#include <stdio.h>
#include <stdlib.h>
 /* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
    int n1, n2, res;
    printf("Dame 2 enteros\n");
    int scanner = scanf("%d %d", &n1, &n2);
    res = n1 - n2;
    printf("El resultado de %d - %d es %d\n", n1, n2, res);
    return 0;
}