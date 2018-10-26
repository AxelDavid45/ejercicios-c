#include <stdio.h>

int main()
{
    // variables
    char nombre[50];
    int i;
    float cal1,cal2,cal3,prom;

    // ciclo
    for (i = 1; i <= 3; i++)
    {
        printf("Ingresa tu nombre: ");
        fflush(stdin); //limpia el buffer del teclado
        gets(nombre);
        printf("\nIngresa tus tres calificaciones: ");
        scanf("%f %f %f",&cal1,&cal2,&cal3);

        prom = (cal1 + cal2 + cal3)/3;
        
        if(prom >= 70) {
            printf("\n%s esta aprobado con una calificacion de %.2f\n",nombre, prom);
        } else {
            printf("\n%s esta reprobado :( su calificacion fue: %.2f\n",nombre,prom);
        }
    }

    printf("--------------------------");
    printf("\nEl programa ha finalizado\n");
    printf("--------------------------");
    return 0;

}
