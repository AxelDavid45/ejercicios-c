#include <stdio.h>

int main() {
    int nVendedores,i=0,nVendedor;
    int cquinientos = 0,cMil = 0,cMayor = 0;
    float ven1,ven2,ven3,venTotal;


    printf("\nCuantos vendedores tienes?\n");
    scanf("%i",&nVendedores);

    while(i < nVendedores) {
        printf("\nEscribe el numero del vendedor:\n");
        scanf("%i",&nVendedor);
        printf("\nEscribe el valor de la venta 1\n");
        scanf("%f",&ven1);
        printf("\nEscribe el valor de la venta 2\n");
        scanf("%f",&ven2);
        printf("\nEscribe el valor de la venta 3\n");
        scanf("%f",&ven3);

        venTotal = ven1 + ven2 + ven3;

        printf("\nEl total de la compra para el vendedor %i es: %.2f\n",nVendedor,venTotal);
        printf("\n------------------------------------\n");
        printf("\nEl cliente gasto lo siguiente: \n");
        printf("\nVenta 1 = %.2f\n",ven1);
        printf("\nVenta 2 = %.2f\n",ven2);
        printf("\nVenta 3 = %.2f\n",ven3);
        printf("\n------------------------------------\n");

        if(venTotal <=500) {
            cquinientos += 1;
        } else if(venTotal > 500 & venTotal <=1000) {
            cMil += 1;
        } else {
            cMayor += 1;
        }

        i++;

    }

    printf("\nLa cantidad de vendedores con venta menor a 500 fueron %i",cquinientos);
    printf("\nLa cantidad de vendedores con venta entre 500 y 1000 fueron %i",cMil);
    printf("\nLa cantidad de vendedores con venta mayor a 1000 fueron %i",cMayor);

    
    
    
    
    
    
    
    
    
    
    return 0;
}