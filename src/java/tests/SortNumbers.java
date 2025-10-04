import java.util.Scanner;

class SortNumbers {
    public static void main(String[] args) {
        int n1, n2, n3, aux; // n1 < n2 < n3
        System.out.println("Enter three integers: "); // <-- tipo lo verde es string pero definirlo como char xd[] 

        Scanner scanner = new Scanner(System.in);
        n1 = scanner.nextInt();
        n2 = scanner.nextInt();
        n3 = scanner.nextInt();
        scanner.close();
        
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