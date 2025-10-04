#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int num = 1, lim;
    printf("¿Hasta qué número deseas visualizar tu serie? \n");
    scanf("%d",&lim);
    while (num <= lim)
    {
        printf("%d\n",num);
        num++;
    }
    return(0);
}