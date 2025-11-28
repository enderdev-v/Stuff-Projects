#include <stdio.h>
#include <stdlib.h>
//Prototipos. Práctica 42

int suma( );
int resta( );

//Principal
int main(int argc, char *argv[]) {
    int r, op;
    printf("1)Suma 2)Resta \n");
    scanf("%d", &op);
    if (op==1)
    { r=suma();
      printf("El resultado de la suma es %d\n", r);
    }
    else if (op==2)
    {
        printf("El resultado de la resta es %f\n", resta( ) );
        system("PAUSE"); return 0;
    }
}

//Funciones
int suma() {
    int c, n1, n2;
    printf("Dame dos valores \n");
    scanf("%d%d", &n1, &n2);
    c=n1+n2;
    return (c);
}

int resta() {
    int n1, n2;
    printf("Dame dos valores \n");
    scanf("%d%d", &n1, &n2);
    return (n1-n2);
}