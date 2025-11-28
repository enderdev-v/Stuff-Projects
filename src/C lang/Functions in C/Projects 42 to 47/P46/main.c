#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input */

int main(int argc, char *argv[]) {
	int cont = 0;
	int DIA = 0;
	do {
		printf("Introduce el valor del dia\n");
		scanf("%d", &DIA);

		switch (DIA) {
			case 1: printf("Domingo\n"); break;
			case 2: printf("Lunes\n"); break;
			case 3: printf("Martes\n"); break;
			case 4: printf("Miercoles\n"); break;
			case 5: printf("Jueves\n"); break;
			case 6: printf("Viernes\n"); break;
			case 7: printf("Sabado\n"); break;
			default: printf("Error: Ese no es un dia\n"); break;
		}

		printf("Desea continuar (yes = 1, no = 0)?\n");
		scanf("%d", &cont);
		while (cont != 0 && cont != 1) {
			printf("El valor no es 0 1 \n");
			scanf("%d", &cont);
		}

	} while (cont != 0);
	return 0;
}