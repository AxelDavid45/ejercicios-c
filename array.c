#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // se declara el arreglo con la cantidad de datos
    int numeros[20],i,num;

    printf("\nLlenando el arreglo\n");
    // iteramos el numero
    srand(time(NULL));
    for(i = 0; i < 20; i++) {
        // printf("\nIngresa el dato a almacenar:\n");
        // scanf("%i",&num);
        numeros[i]= rand() % 1000;
    }

    printf("\nLos elementos del arreglo son los siguientes:\n");
    for(i = 0; i <= 20; i++) {
        printf("\n------------------------------\n");
        printf("\nLa posicion %i del arreglo tiene el valor: %i\n",i,numeros[i]);
    }
    printf("\n------------------------------\n");




    return 0;
}
