#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    double s1, s2, s3, result;                                       //  <-- Define the students marks and the result
    printf("Tell me the mark of your students\n");             // <- print in console the solicitude for user
    scanf("%lf%lf%lf", &s1, &s2, &s3);                          // <- Storage the input for user
    result = (s1 + s2 + s3) / 3;                               // <- calc average
    printf("The average for your students is: %f \n", result); // <- Final input :D
    return 0;
}