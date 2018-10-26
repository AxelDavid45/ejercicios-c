#include <stdio.h>


int main() {
    int v1,v2;
    float suma,multi,divi,resta;
    char operador;
    char res;
    
    do {
    // empieza el ciclo

    printf("------------------\n");
    printf("Suma (+)\n");
    printf("Resta (-)\n");
    printf("Multiplicacion (*)\n");
    printf("Division (/)\n");
    printf("------------------\n");
    printf("\nIngresa el operador a utilizar: ");
    scanf("%s",&operador);
    printf("\nIngresa el valor del numero 1: ");
    scanf("%i",&v1);
    printf("\nIngresa el valor del numero 2: ");
    scanf("%i",&v2);


    
    switch (operador)
    {
        case '+':
                suma = v1 + v2;
                printf("\nEl resultado de la suma es: %.2f\n",suma);
            break;
        case '-':
                resta = v1 - v2;
                printf("\nEl resultado de la resta es: %.2f\n",resta);
            break;
        case 'x':
                multi = v1 * v2;
                printf("\n El resultado de la multiplicacion es: %.2f\n",multi);
            break;
        case '/':
                divi = v1 / v2;
                printf("\n El resultado de la division es: %.2f\n",divi);
            break;
    }
    printf("\nDeseas hacer otra operacion? (s o n)\n");
    scanf("%s",&res);

    } while(res == 's');
    


    return 0;

}