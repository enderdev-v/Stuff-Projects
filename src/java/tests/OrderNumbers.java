#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class SortNumbers {
    public static void main(String[] args) {
        int n1, n2, n3, aux; // n1 < n2 < n3
        System.out.println("Enter three integers: "); // <-- tipo lo verde es string pero definirlo como char xd[] 

        Scanner scanner = new Scanner(System.in);
        n1 = scanner.nextInt();
        n2 = scanner.nextInt();
        n3 = scanner.nextInt();
        
        System.out.printf("The Original input %d %d %d\n", n1, n2, n3);
        
        if (n1 > n2) {
            aux = n1;
            n1 = n2;
            n2 = aux;
        }
        if (n2 > n3) {
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
        if (n1 > n2) {
            aux = n1;
            n1 = n2;
            n2 = aux;
        }
        
        
        System.out.printf("The final result is  %d %d %d\n", n1, n2, n3);

    }
}
{
    int n1, n2, n3, aux; // n1 < n2 < n3
    printf("Enter three integers: \n"); // <-- tipo lo verde es string pero definirlo como char xd[] 

    scanf("%d%d%d", &n1, &n2, &n3);
    
    printf("The Original input %d %d %d\n", n1, n2, n3);
    
    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n2 > n3) {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    
    
    printf("The final result is  %d %d %d\n", n1, n2, n3);
    

    int continueProgram = 1;

    printf("Do you want to continue? (1 for yes, 0 for no): \n ");

    scanf("%d", &continueProgram);
    if (continueProgram == 0) return 0;
    return main();
}