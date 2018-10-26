#include <stdio.h>

int matricula, nmaterias, aprobados, reprobados, nAlumnos, ncalificaciones, acumCalificaciones;
float promMat, promGrup, calfGrupo;
int res1 = 1, i, calf;

int main()
{
    aprobados = 0;
    reprobados = 0;
    nAlumnos = 0;
    nmaterias = 0;
    while (res1 == 1)
    {

        printf("\nIngresa un numero de matricula:\n");
        scanf("%i", &matricula);
        printf("\nCuantas calificaciones evaluaras?\n");
        scanf("%i", &ncalificaciones);

        for (i = 1; i <= ncalificaciones; i++)
        {
            printf("\nInserta la calificacion:\n");
            scanf("%i", &calf);
            acumCalificaciones += calf;
            printf("\nel acumulado es %i", acumCalificaciones);
        }

        promMat = acumCalificaciones / ncalificaciones;
        promGrup += promMat;
        acumCalificaciones = 0;

        if (promMat >= 70 & promMat <= 100)
        {

            printf("\n-----------------------------------------------\n");
            printf("\nLa calificacion de la matricula: %i es: %.2f\n", matricula, promMat);
            printf("\nEsta aprobado\n");
            printf("\n-----------------------------------------------\n");
            aprobados += 1;
        }
        else
        {

            printf("\n-----------------------------------------------\n");
            printf("\nLa calificacion de la matricula: %i es: %.2f\n", matricula, promMat);
            printf("\nEsta reprobado\n");
            printf("\n-----------------------------------------------\n");
            reprobados += 1;
        }

        nAlumnos += 1;
        printf("\nDesea seguir introduciendo calificaciones de los alumnos? (s = 1 o n = 2)\n");
        scanf("%i", &res1);
    }
    calfGrupo = promGrup / nAlumnos;
    printf("\n-----------------------\n");
    printf("\nEl total de aprobados en el grupo es: %i\n", aprobados);
    printf("\nEl total de reprobados en el grupo es: %i\n", reprobados);
    printf("\nEl promedio general del grupo es: %.2f\n", calfGrupo);
    printf("\n-----------------------\n");
}