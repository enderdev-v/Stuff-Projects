import java.util.Scanner;

// Inspired by Project 12 Major Number
void main() {
    // Execution time start
    long tiempoInicio = System.nanoTime();

    // Variable declare
    Scanner scanner = new Scanner(System.in);
    int max = 0;
    int IsEqual = 1;
    // logic
    System.out.println("Enter a number of numbers that you want to compare:");
    int InputN = scanner.nextInt();
    System.out.println("Ok, and now enter " + InputN + " integers:");
    for (int i = 0; i < InputN; i++) {
        int n = scanner.nextInt();
        if (n == max)
            IsEqual++;
        if (n > max)
            max = n;
    }
    scanner.close();
    System.out.println("Ok I got it! and then I show you the max number");
    if (IsEqual == InputN)
        System.out.println("All numbers are equal");
    else
        System.out.println("The max number is: " + max);

    // Execution time
    long tiempoFin = System.nanoTime();
    long tiempoTotal = (tiempoFin - tiempoInicio) / 1000000000;
    System.out.println("Execution time in seconds: " + tiempoTotal);
}
