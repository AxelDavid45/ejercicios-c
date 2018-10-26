#include <stdio.h>

int main() {
    int i,ib,nveces;
    float imp,total;
    // las veces que se repetira el programa
    printf("\nCuantas veces quieres repetir el programa?\n");
    scanf("%i",&nveces);
    
    // ingresamos el ciclo
    for(i = 1; i <= nveces; i++) {
        printf("Inserta el importe bruto de la compra:\n");
        scanf("%i",&ib);
        // comprueba que el importe sea mayor a 15000
        if(ib > 15000) {
            total = ib * 1.16;
            printf("El total de la compra con el 16 porciento de impuestos es: %.2f\n",total);
        } else {
            total = ib * 1.10;
            printf("El total de la compra con el 16 porciento de impuestos es: %.2f\n",total);
        }


    }
}