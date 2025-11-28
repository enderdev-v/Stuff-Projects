#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Function Average Marks
float average();



// Function main
int main(int argc, char argv[]) {
    float avg = average();
    printf("The average is: %f \n", avg);
    system("pause");
    return 0;
}

// Functions


float average () {
    int i;
    float avg = 0, mark = 0;
    printf("Enter 5 marks: \n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &mark);
        avg = avg + mark;
    }
    avg = avg / 5;
    return avg;
}