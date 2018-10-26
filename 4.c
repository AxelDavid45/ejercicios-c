#include <stdio.h>

int n1,n2;

int main() {
    printf("\nIngresa el primer numero:\n");
    scanf("%i",&n1);
    printf("\nIngresa el segundo numero:\n");
    scanf("%i",&n2);

    if(n1 > 0 & n2 > 0) {
        printf("\nEl producto es positivo\n");
    } else if(n1 < 0 & n2 < 0) {
        printf("\nEl producto es positivo\n");
    } else {
        printf("\nEl producto es negativo\n");
    }
}