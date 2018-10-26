#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// crear un programa que tenga un arreglo a y b que tenga numeros aleatorios y con los valores de los dos arreglos crear un nuevo arreglo sumando los valores

int main() {
    int a[4],b[4],i,c[4],suma;


    srand(time(NULL));

    printf("\nLos valores del arreglo A es:");
    for(i=0; i < 4; i++) {
        a[i]= rand() % 100;
        b[i] = rand() % 100;
        suma = a[i] + b[i];
        c[i] = suma;
        printf(" %i ",a[i]);
    }
    printf("\n");
    printf("\nLos valores del arreglo b son:");
    for(i=0; i < 4; i++) {
        printf(" %i ",b[i]);
    }
    printf("\n");
    printf("\nLa suma de los dos arreglos es:");
    for(i=0; i < 4; i++) {
        printf(" %i ",c[i]);
    }
    printf("\n");


    return 0;
}