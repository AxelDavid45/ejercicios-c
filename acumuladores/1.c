#include <stdio.h>

int matricula,ca=0,cr=0,nAc,i,materias,nI;
int confirmacionMat;
float cal,prom;


int main() {
    
    printf("\nEscriba el numero de alumnos que desea calificar\n");
    scanf("%i",&nAc);

    i = 0;
    while(i < nAc) {
        printf("\nEscribe el numero de matricula:\n");
        scanf("%i",&matricula);

        printf("\nCuantas materias tienes?\n");
        scanf("%i",&materias);
        nI = 0;
        while(nI < materias) {
            printf("\nIngresa la calificacion de tu materia:\n ");
            scanf("%f",&cal);
            cal+=cal;
            nI++;
        }

        prom = cal/materias;

        printf("\nEl promedio de %i es: %f\n",matricula,prom);

        if(prom >= 70) {
            printf("\nHas pasado la materia\n");
            ca += 1;
        } else {
            printf("\nNo has pasado la materia\n");
            cr += 1;
        }

        i++;
        
    }

    printf("\nEl numero de aprobados son: %i\n",ca);
    printf("\nLa cantidad de reprobados son: %i\n",cr);




    return 0;

}