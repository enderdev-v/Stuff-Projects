#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Function Average Marks

float average () {
    int i;
    float prom = 0, mark = 0;
    printf("Enter 5 marks: \n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &mark);
        prom = prom + (float) mark;
    }
    prom = prom / 5;
    return prom;
}


// Function main
int main(int argc, char argv[]) {
    float prom = average();
    printf("The average is: %f \n", prom);
    system("pause");
    return 0;
}