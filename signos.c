#include <stdio.h>
#include <string.h>

//strcpy();

int main () {
    char fue[]="fuego",tie[]="tierra",air[]="aire",agu[]="agua",res[]="Tu signo tiene la categoria: ";
    float primer = (0.25,1.25,2.25);
    int dI;

    printf("\n1.Aries\n");
    printf("\n2.Tauro\n");
    printf("\n3.Geminis\n");
    printf("\n4.Cancer\n");
    printf("\n5.Leo\n");
    printf("\n6.Virgo\n");
    printf("\n7.Libra\n");
    printf("\n8.Escorpio\n");
    printf("\n9.Sagitario\n");
    printf("\n10.Capricornio\n");
    printf("\n11.Acuario\n");
    printf("\n12.Piscis\n");
    printf("\n------------------------\n");
    printf("\nEscriba el numero del signo zodiacal:\n");
    scanf("%i",&dI);
    printf("\n------------------------\n");

    
    switch (dI/4)
    {
        case primer:
                strcpy(res+29,fue);
                printf("\n%c\n",res);
            break;

    }






    return 0;   
}
