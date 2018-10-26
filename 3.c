#include <stdio.h>

int matricula;
float cal1, cal2, cal3, promedio;
int main()
{
    printf("\nIngresa la matricula:\n");
    scanf("%i", &matricula);
    printf("\nIngresa tus tres calificaciones separadas por espacios:\n");
    scanf("%f %f %f", &cal1, &cal2, &cal3);

    promedio = (cal1 + cal2 + cal3) / 3;

    if (promedio >= 7)
    {
        if (promedio <= 9)
        {
            printf("\nEl alumno con la matricula %i tiene un promedio de %.2f y esta aprobado\n", matricula, promedio);
        }
        else
        {
            printf("\nEl alumno %i esta reprobado con %.2f",matricula,promedio);
        }
    }
    else
    {
        printf("\nEl alumno %i reprobo por un promedio de %f", matricula, promedio);
    }

    return 0;
}