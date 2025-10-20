#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char argv[]) {
int a = 0, b = 5, c= 12;
a = b + c / 2 * 10;
b = a * 3;
c = 20 % 3 / 2 * 5;
b = b + c + a + (20 - a);
printf("%d", b);
return 0;
}