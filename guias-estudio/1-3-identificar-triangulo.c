#include <stdio.h>

/*  Determinar si un triángulo es equilátero, escaleno o isósceles, 
según sus lados (valores enteros) que serán ingresados por teclado por el usuario.  */

int main()
{
    int ladoA, ladoB, ladoC;

    printf("Ingrese el primer lado: ");
    scanf("%d", &ladoA);

    printf("Ingrese el segundo lado: ");
    scanf("%d", &ladoB);

    printf("Ingrese el tercer lado: ");
    scanf("%d", &ladoC);

    /* ¿El triangulo ingresado es valido? La longitud de dos lados debe ser mayor que la del tercer lado. */ 
    if ( ladoA+ladoB > ladoC && ladoB+ladoC> ladoB && ladoA+ladoC >ladoB )
    {
        // Si es valido entonces buscamos la clasificación a la que pertenece. 
        if ( ladoA == ladoB && ladoB == ladoC)
        {
            printf("Es un triangulo equilatero\n");
        }

        else if ( ladoA==ladoB || ladoA==ladoC || ladoB==ladoC)
        {
            printf("Es un triangulo isoseles\n");
        }
        else
        {
            printf("Es un triangulo escaleno\n");
        }

    }
    else
    {
        printf("El triangulo no es valido!");
    }

    return 0;
}