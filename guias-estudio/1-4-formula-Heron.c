#include <stdio.h>
#include <math.h>

int main()
{
    // Defino las variables que voy a utilizar.
    int ladoA, ladoB, ladoC;

    // Ingreso de datos.
    printf("Ingrese el primer lado: ");
    scanf("%d", &ladoA);


    printf("Ingrese el segundo lado: ");
    scanf("%d", &ladoB);

    printf("Ingrese el tercer lado: ");
    scanf("%d", &ladoC);

    // Primero debo verificar que el triangulo sea valido.
    if ( ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA)
    {
        // Si es valido realizo la formula
        int s = ( ladoA + ladoB + ladoC)/2;
        double area = sqrt(s*(s-ladoA)*(s-ladoB)*(s-ladoC));  /*    sqrt ----> raiz de (...)    */

        printf("El semiperimetro es: %d\n", s);
        printf("El area es: %4.2f\n", area);
    }
    else
    {
        printf("El triangulo no es valido!");
    }
    
    return 0;
}